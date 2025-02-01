using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MixedReality.Toolkit.UX
{
    public class AudioManager : MonoBehaviour
    {
        private AudioSource audioSource;

        [SerializeField]
        private AudioClip clickSound;
        [SerializeField]
        private AudioClip IncorrectSound;

        //ƒVƒ“ƒOƒ‹ƒgƒ“‰»
        public static AudioManager Instance;

        void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
                DontDestroyOnLoad(this.gameObject);
            }
            else
            {
                Destroy(this.gameObject);
            }
        }

        void Start()
        {
            audioSource = GetComponent<AudioSource>();
        }

        public void PlayClickSound()
        {
            audioSource.PlayOneShot(clickSound);
        }

        public void PlayIncorrectSound()
        {
            audioSource.PlayOneShot(IncorrectSound);
        }
    }
}
