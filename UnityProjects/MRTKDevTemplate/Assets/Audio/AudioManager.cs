using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MixedReality.Toolkit.Input
{
    public class AudioManager : MonoBehaviour
    {
        private AudioSource audioSource;
        [SerializeField]
        private AudioClip clickSound;

        void Start()
        {
            audioSource = GetComponent<AudioSource>();
        }

        public void PlayClickSound()
        {
            audioSource.PlayOneShot(clickSound);
        }
    }
}
