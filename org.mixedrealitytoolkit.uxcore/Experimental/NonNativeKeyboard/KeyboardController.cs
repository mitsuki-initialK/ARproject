using TMPro;
using UnityEngine;
using UnityEngine.UI;
using MixedReality.Toolkit.UX.Experimental;
using System.Collections;

namespace MixedReality.Toolkit.Input
{
    public class KeyboardController : MonoBehaviour
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
        private int posZ = 0;
        private float flickThreshold = 0.075f;
        private Coroutine pinchCoroutine;

        private void Start()
        {
            pinchPoseSource = new PinchPoseSource();
            pinchPoseSource.Hand = Handedness.Left;

            pinchPoseSource2 = new PinchPoseSource();
            pinchPoseSource2.Hand = Handedness.Right;

            Transform KeyboardCoverTransform = this.transform.parent.Find("keyboard_Cover");
            if(KeyboardCoverTransform != null ) { KeyboardCover = KeyboardCoverTransform.gameObject; }

            float keyDistance = 75f;

            if (keys.Length == 1) return;

            if (keys[2] != null)
            {
                keys[2].transform.localPosition = new Vector3(- keyDistance, 0, 0);
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
                keys[5].transform.localPosition = new Vector3(0, - keyDistance, 0);
            }
            else { keys[5] = keys[1]; }
        }



        public void GazeAt()
        {
            isGazing = true;
            keys[0].GetComponent<Image>().color = Color.gray;
        }

        public void GazeAway()
        {
            isGazing = false;
            keys[0].GetComponent<Image>().color = new Color(0.15f, 0.15f, 0.15f);
        }


        public void Pinch()
        {
            if(KeyboardCover != null)
            {
                KeyboardCover.SetActive(true);
            }
            
            Show5key();
            SelectKey(keys[1]);

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

                if (flickDistance.z < -0.15f)
                {
                    if(posZ != 1) Shifted(1);
                }
                else if (flickDistance.z <  0.15f)
                {
                    if (posZ != 0) Shifted(0);
                }
                else
                {
                    if (posZ != -1) Shifted(-1);
                }

                if (absX > flickThreshold || absY > flickThreshold)
                {
                    if ((absX - absY) > 0)
                    {
                        if (flickDistance.x > 0)
                        {
                            SelectKey(keys[4]);
                        }
                        else
                        {
                            SelectKey(keys[2]);
                        }
                    }
                    else
                    {
                        if (flickDistance.y > 0)
                        {
                            SelectKey(keys[3]);
                        }
                        else
                        {
                            SelectKey(keys[5]);
                        }
                    }
                }
                else
                {
                    SelectKey(keys[1]);
                }

                yield return new WaitForSeconds(0.5f);
            }
        }

        public void PinchExit()
        {
            isPinching = false;

            if (KeyboardCover != null)
            {
                KeyboardCover.transform.SetAsLastSibling();
                KeyboardCover.SetActive(false);
            }

            selectingKey.GetComponent<NonNativeValueKey>().FlickInput();
            SelectCancell();
            Shifted(0);

            Hide5key();
        }



        private void Shifted(int _posZ)
        {
            posZ = _posZ;
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

        private void Show5key()
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

        private void Hide5key()
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
