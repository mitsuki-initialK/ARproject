using TMPro;
using UnityEngine;
using UnityEngine.UI;
using MixedReality.Toolkit.Input;
using System.Collections;

namespace MixedReality.Toolkit.UX.Experimental
{
    public class KeyboardController : MonoBehaviour
    {
        [SerializeField]
        private GameObject[] keys;

        private PinchPoseSource pinchPoseSource;
        private GameObject selectingKey = null;   //ピンチ中に入力されているキー
        private GameObject KeyboardCover = null;　//キー選択時にキーボードを暗くするために使用

        private bool isPinching = false;　　　//ピンチしているかどうか
        private bool isGazing = false;　　　　//選択中に選択したキーを見ているかどうか
        private int posZ = 0;　　　　　　　　 //前後フリック（１：手前　０：中央　-１：奥）


        private void Start()
        {
            //右手を検出するように
            pinchPoseSource = new PinchPoseSource();
            pinchPoseSource.Hand = Handedness.Right;

            //キーボードカバーを取得
            Transform KeyboardCoverTransform = this.transform.parent.Find("keyboard_Cover");
            if(KeyboardCoverTransform != null ) { KeyboardCover = KeyboardCoverTransform.gameObject; }

            //キーの配置 (ラベルの裏にあるキーを配置して非表示にする)
            SetKeys();
            
        }

        private void SetKeys()
        {
            float expantion = 1.3f;  //拡大するときの倍率
            float keyDistance = 75f * expantion;　//キーの間隔

            if (keys.Length == 1) return;　  //キーがひとつの場合

            if (keys.Length == 6)
            {
                if (keys[2] != null)
                {
                    keys[2].transform.localPosition = new Vector3(-keyDistance, 0, 0);
                }
                else { keys[2] = keys[1]; }

                if (keys[3] != null)
                {
                    keys[3].transform.localPosition = new Vector3(0, keyDistance, 0);
                }
                else { keys[3] = keys[1]; }

                if (keys[4] != null)
                {
                    keys[4].transform.localPosition = new Vector3(keyDistance, 0, 0);
                }
                else { keys[4] = keys[1]; }

                if (keys[5] != null)
                {
                    keys[5].transform.localPosition = new Vector3(0, -keyDistance, 0);
                }
                else { keys[5] = keys[1]; }
            }　　　　//文字キーの場合
            else if (keys.Length == 10)　　　//数字キーの場合
            {
                keys[1].transform.localPosition = new Vector3(-keyDistance, keyDistance, 0);

                keys[2].transform.localPosition = new Vector3(0, keyDistance, 0);

                keys[3].transform.localPosition = new Vector3(keyDistance, keyDistance, 0);


                keys[4].transform.localPosition = new Vector3(-keyDistance, 0, 0);

                keys[6].transform.localPosition = new Vector3(keyDistance, 0, 0);


                keys[7].transform.localPosition = new Vector3(-keyDistance, -keyDistance, 0);

                keys[8].transform.localPosition = new Vector3(0, -keyDistance, 0);

                keys[9].transform.localPosition = new Vector3(keyDistance, -keyDistance, 0);
            }　//数字キーの場合


            foreach (GameObject key in keys)
            {
                if (key != null && key != keys[0])
                {
                    key.transform.localScale = new Vector3(expantion, expantion, 1.0f);
                }
            }
        }


        //キーを見たとき
        public void GazeAt()
        {
            isGazing = true;
            keys[0].GetComponent<Image>().color = Color.gray;
        }

        //キーから目を外したとき
        public void GazeAway()
        {
            isGazing = false;
            keys[0].GetComponent<Image>().color = new Color(0.15f, 0.15f, 0.15f);
        }

        //ピンチしてキーを選択した時
        public void Pinch()
        {
            ShowKeys();
            SelectKey(keys[1]);

            if (KeyboardCover != null)
            {
                KeyboardCover.SetActive(true);
            }

            isPinching = true;
            Coroutine pinchCoroutine = StartCoroutine(Pinching());
        }

        private IEnumerator Pinching()
        {
            Vector3 pinchStartPosition = GetPinchPosition();

            while (isPinching)
            {
                Vector3 flickDistance = GetPinchPosition() - pinchStartPosition;

                if (keys.Length == 6)
                {
                    Flick5keys(flickDistance);
                }
                else
                {
                    Flick9keys(flickDistance);
                }

                yield return new WaitForSeconds(0.5f);
            }
        }

        //ピンチを解除したとき
        public void PinchExit()
        {
            isPinching = false;

            if (KeyboardCover != null)
            {
                KeyboardCover.transform.SetAsLastSibling();
                KeyboardCover.SetActive(false);
            }

            selectingKey.GetComponent<NonNativeValueKey>().FlickInput(); //入力

            SelectCancell();
            Shifted(0);

            HideKeys();
        }



        //数字キーの場合のフリック操作
        private void Flick9keys(Vector3 flickDistance)
        {
            float absX = Mathf.Abs(flickDistance.x);
            float absY = Mathf.Abs(flickDistance.y);

            int lineX = 0;
            int lineY = 0;

            float flickThreshold = 0.05f;

            if (flickDistance.z < -flickThreshold)
            {
                if (posZ != 1) Shifted(1);
            }

            if (absX > flickThreshold)
            {
                if (flickDistance.x > 0) lineX = 1;
                else lineX = -1;
            }

            if (absY > flickThreshold)
            {
                if (flickDistance.y > 0) lineY = 1;
                else lineY = -1;
            }

            switch (lineX)
            {
                case 0:
                    switch (lineY)
                    {
                        case 0:
                            SelectKey(keys[5]);
                            break;

                        case 1:
                            SelectKey(keys[2]);
                            break;

                        case -1:
                            SelectKey(keys[8]);
                            break;
                    }
                    break;

                case 1:
                    switch (lineY)
                    {
                        case 0:
                            SelectKey(keys[6]);
                            break;

                        case 1:
                            SelectKey(keys[3]);
                            break;

                        case -1:
                            SelectKey(keys[9]);
                            break;
                    }
                    break;

                case -1:
                    switch (lineY)
                    {
                        case 0:
                            SelectKey(keys[4]);
                            break;

                        case 1:
                            SelectKey(keys[1]);
                            break;

                        case -1:
                            SelectKey(keys[7]);
                            break;
                    }
                    break;
            }
        }

        //文字キーの場合のフリック操作
        private void Flick5keys(Vector3 flickDistance)
        {
            float absX = Mathf.Abs(flickDistance.x);
            float absY = Mathf.Abs(flickDistance.y);

            if (absX > 0.050f)
            {
                if (flickDistance.x > 0)
                {
                    SelectKey(keys[4]);   //右のキー
                }
                else
                {
                    SelectKey(keys[2]);    //左のキー
                }
            }
            else if (absY > 0.050f)
            {
                if (flickDistance.y > 0)
                {
                    SelectKey(keys[3]);   //上のキー
                }
                else
                {
                    SelectKey(keys[5]);   //下のキー
                }
            }
            else
            {
                SelectKey(keys[1]);   //真ん中のキー
            }


            if (posZ == 0)
            {
                if (selectingKey == keys[2] && selectingKey == keys[3]) //左or上キーにフリックしている場合
                {
                    if (flickDistance.z < -0.125f)
                    {
                        if (posZ != 1) Shifted(1);       //手前に引っ張る
                    }
                    else if (flickDistance.z > 0.025f)
                    {
                        if (posZ != -1) Shifted(-1);    //奥に押す
                    }
                }
                else
                {
                    if (flickDistance.z < -0.075f)
                    {
                        if (posZ != 1) Shifted(1);       //手前に引っ張る
                    }
                    else if (flickDistance.z > 0.050f)
                    {
                        if (posZ != -1) Shifted(-1);    //奥に押す
                    }
                }
            }
        }



        //前後フリックが行われたときの処理
        private void Shifted(int posZ)
        {
            foreach (GameObject key in keys)
            {
                if (key != null & key != keys[0])
                {
                    key.GetComponent<NonNativeValueKey>().Shift(posZ);
                }
            }
        }



        private void SelectKey(GameObject selectKey)
        {
            if(selectingKey == selectKey) return;

            SelectCancell();
                 
            selectingKey = selectKey;
            selectingKey.GetComponent<Image>().color = Color.red;
        }

        private void SelectCancell()
        {
            if (selectingKey != null)
            {
                selectingKey.GetComponent<Image>().color = new Color(0.15f, 0.15f, 0.15f);
                selectingKey = null;
            }
        }

        private Vector3 GetPinchPosition()
        {
            Vector3 pinchPosition = new Vector3(0, 0, 0);

            if (pinchPoseSource.TryGetPose(out Pose pinchPose))
            {
                pinchPosition = pinchPose.position;
            }
            else
            {
                Debug.Log("Pinch pose not detected.");
            }

            return pinchPosition;
        }


        private void ShowKeys()
        {
            this.gameObject.transform.SetAsLastSibling();

            foreach (GameObject key in keys)
            {                
                if (key != null)
                {
                    key.SetActive(true);
                }
            }
        }

        private void HideKeys()
        {
            foreach (GameObject key in keys)
            {
                if (key == keys[0]) continue;
                if (key != null)
                {
                    key.SetActive(false);
                }
            }
        }

    }
}
