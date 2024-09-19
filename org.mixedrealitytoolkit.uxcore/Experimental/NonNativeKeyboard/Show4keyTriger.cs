using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MixedReality.Toolkit.UX
{
    public class ControlKey : MonoBehaviour
    {
        [SerializeField]
        private GameObject[] keys;

        private void Start()
        {
            Vector3 keyApos = keys[0].transform.position;
            float keyDistance = 0.15f;

            Vector3 keyIpos = new Vector3(keyApos.x - keyDistance, keyApos.y, keyApos.z);
            keys[1].transform.position = keyIpos;

            Vector3 keyUpos = new Vector3(keyApos.x, keyApos.y + keyDistance, keyApos.z);
            keys[2].transform.position = keyUpos;

            Vector3 keyEpos = new Vector3(keyApos.x + keyDistance, keyApos.y, keyApos.z);
            keys[3].transform.position = keyEpos;

            Vector3 keyOpos = new Vector3(keyApos.x, keyApos.y - keyDistance, keyApos.z);
            keys[4].transform.position = keyOpos;
        }

        public void Show4key()
        {
            foreach (GameObject key in keys)
            {
                if (key == keys[0]) continue;
                if (key != null)
                {
                    key.SetActive(true);
                }
            }
        }

        public void Hide4key()
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
