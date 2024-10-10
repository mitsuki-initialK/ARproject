using TMPro;
using UnityEngine;
using UnityEngine.UI;
using MixedReality.Toolkit.UX.Experimental;
using System.Collections;

namespace MixedReality.Toolkit.Input
{
    public class KeyboardController_number : MonoBehaviour
    {
        [SerializeField]
        private GameObject[] keys;

        private PinchPoseSource pinchPoseSource;
        private PinchPoseSource pinchPoseSource2;
        private Vector3 pinchStartPosition;
        private GameObject selectingKey = null;
        private GameObject KeyboardCover = null;

        private bool isPinching = false;
        private bool isGazing = false;
        private float flickThreshold = 0.05f;
        private Coroutine pinchCoroutine;


        private void Start()
        {
            pinchPoseSource = new PinchPoseSource();
            pinchPoseSource.Hand = Handedness.Left;

            pinchPoseSource2 = new PinchPoseSource();
            pinchPoseSource2.Hand = Handedness.Right;

            Transform KeyboardCoverTransform = this.transform.parent.Find("keyboard_Cover");
            if (KeyboardCoverTransform != null) { KeyboardCover = KeyboardCoverTransform.gameObject; }

            if (keys.Length > 9)
            {
                float expantion = 1.3f;  //ägëÂÇ∑ÇÈÇ∆Ç´ÇÃî{ó¶
                float keyDistance = 75f * expantion;Å@//ÉLÅ[ÇÃä‘äu

                keys[1].transform.localPosition = new Vector3(-keyDistance, keyDistance, 0);

                keys[2].transform.localPosition = new Vector3(0, keyDistance, 0);

                keys[3].transform.localPosition = new Vector3(keyDistance, keyDistance, 0);


                keys[4].transform.localPosition = new Vector3(-keyDistance, 0, 0);

                keys[6].transform.localPosition = new Vector3(keyDistance, 0, 0);



                keys[7].transform.localPosition = new Vector3(-keyDistance, -keyDistance, 0);

                keys[8].transform.localPosition = new Vector3(0, -keyDistance, 0);

                keys[9].transform.localPosition = new Vector3(keyDistance, -keyDistance, 0);

                foreach (GameObject key in keys)
                {
                    if (key != null && key != keys[0])
                    {
                        key.transform.localScale = new Vector3(expantion, expantion, 1.0f);
                    }


                }

            }
        }



        public void GazeAt()
        {
            isGazing = true;
            if (isPinching == false)
            {
                keys[0].GetComponent<Image>().color = Color.gray;
            }
        }

        public void GazeAway()
        {
            isGazing = false;
            if (isPinching == false)
            {
                keys[0].GetComponent<Image>().color = new Color(0.15f, 0.15f, 0.15f);
            }
        }


        public void Pinch()
        {
            ShowNumberkey();
            SelectKey(keys[5]);

            if (KeyboardCover != null)
            {
                KeyboardCover.SetActive(true);
            }

            pinchStartPosition = GetPinchPosition();
            isPinching = true;
            pinchCoroutine = StartCoroutine(Pinching());
        }

        private IEnumerator Pinching()
        {
            while (isPinching)
            {
                Vector3 flickDistance = GetPinchPosition() - pinchStartPosition;

                float absX = Mathf.Abs(flickDistance.x);
                float absY = Mathf.Abs(flickDistance.y);

                int lineX = 0;
                int lineY = 0;

                if (flickDistance.z < -flickThreshold)
                {
                    keys[5].GetComponent<NonNativeValueKey>().Shift(1);
                }
                else
                {
                    keys[5].GetComponent<NonNativeValueKey>().Shift(0);
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

                yield return new WaitForSeconds(0.5f);
            }
        }

        public void PinchExit()
        {
            isPinching = false;

            selectingKey.GetComponent<NonNativeValueKey>().FlickInput();
            SelectCancell();

            if (KeyboardCover != null)
            {
                KeyboardCover.transform.SetAsLastSibling();
                KeyboardCover.SetActive(false);
            }

            if (isGazing)
            {
                keys[0].GetComponent<Image>().color = Color.gray;
            }

            HideNumberkey();
        }



        private void SelectKey(GameObject selectKey)
        {
            if (selectingKey == selectKey) return;

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
                if (pinchPoseSource2.TryGetPose(out Pose pinchPose2))
                {
                    pinchPosition = pinchPose2.position;
                }
                else
                {
                    Debug.Log("Pinch pose not detected.");
                }
            }

            return pinchPosition;
        }

        private void ShowNumberkey()
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

        private void HideNumberkey()
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
