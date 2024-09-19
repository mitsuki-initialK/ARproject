// Copyright (c) Mixed Reality Toolkit Contributors
// Licensed under the BSD 3-Clause

using TMPro;
using UnityEngine;
using MixedReality.Toolkit.Input;

namespace MixedReality.Toolkit.UX.Experimental
{
    /// <summary>
    /// Class representing a value key in the non native keyboard
    /// </summary>
    /// <remarks>
    /// This is an experimental feature. This class is early in the cycle, it has 
    /// been labeled as experimental to indicate that it is still evolving, and 
    /// subject to change over time. Parts of the MRTK, such as this class, appear 
    /// to have a lot of value even if the details haven't fully been fleshed out. 
    /// For these types of features, we want the community to see them and get 
    /// value out of them early enough so to provide feedback. 
    /// </remarks>
    public class NonNativeValueKey : NonNativeKey
    {   
        private string currentValue;

        private AudioManager audioManager;

        /// <summary>
        /// The current string value of this value key. Note the value may change based on the shift status of the keyboard.
        /// </summary>
        public string CurrentValue
        {
            get => currentValue;
            private set
            {
                currentValue = value;
                if (textMeshProText != null)
                {
                    textMeshProText.text = currentValue;
                }
            }
        }

        /// <summary>
        /// The default string value for this key.
        /// </summary>
        [SerializeField, Tooltip("The default string value for this key.")]
        private string defaultValue;

        /// <summary>
        /// The default string value for this key.
        /// </summary>
        public string DefaultValue
        {
            get => defaultValue;
            set => defaultValue = value;
        }

        /// <summary>
        /// The shifted string value for this key.
        /// </summary>
        [SerializeField, Tooltip("The pulled string value for this key.")]
        private string pulledValue = null;

        /// <summary>
        /// The shifted string value for this key.
        /// </summary>
        public string PulledValue
        {
            get => pulledValue;
            set => pulledValue = value;
        }

        [SerializeField, Tooltip("The pushed string value for this key.")]
        private string pushedValue = null;

        public string PushedValue
        {
            get => pushedValue;
            set => pushedValue = value;
        }

        /// <summary>
        /// Reference to child text element.
        /// </summary>
        [SerializeField, Tooltip("Reference to child text element.")]
        private TMP_Text textMeshProText;

        /// <inheritdoc/>
        protected override void Awake()
        {
            base.Awake();
            if (textMeshProText == null)
            {
                textMeshProText = GetComponentInChildren<TMP_Text>();
            }

            audioManager = GameObject.Find("AudioManager").GetComponent<AudioManager>();

            CurrentValue = defaultValue;

            if (string.IsNullOrEmpty(pulledValue))
            {
                pulledValue = defaultValue;
            }

            if (string.IsNullOrEmpty(pushedValue))
            {
                pushedValue = defaultValue;
            }
        }


        /// <summary>
        /// A Unity Editor only event function that is called when the script is loaded or a value changes in the Unity Inspector.
        /// </summary>
        private void OnValidate()
        {
            if (textMeshProText == null)
            {
                textMeshProText = GetComponentInChildren<TMP_Text>();
            }
            if (textMeshProText != null)
            {
                textMeshProText.text = defaultValue;
            }
        }

        /// <inheritdoc/>
        protected override void FireKey()
        {
            //NonNativeKeyboard.Instance.ProcessValueKeyPress(this);
        }


        public void FlickInput()
        {
            audioManager.PlayClickSound();
            NonNativeKeyboard.Instance.ProcessValueKeyPress(this);
        }


        public void Shift(int posZ)
        {
            if (posZ == 1)
            {
                CurrentValue = pulledValue;
            }
            else if(posZ == 0)
            {
                CurrentValue = defaultValue;
            }
            else
            {
                CurrentValue = pushedValue;
            }
        }

        public void CapsLock()
        {
            string tmp = DefaultValue;
            CurrentValue = pulledValue;
            DefaultValue = pulledValue;
            PulledValue = tmp;
        }
    }
}
