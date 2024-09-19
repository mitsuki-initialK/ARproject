// Copyright (c) Mixed Reality Toolkit Contributors
// Licensed under the BSD 3-Clause

using UnityEngine;
using MixedReality.Toolkit.Input;

namespace MixedReality.Toolkit.UX.Experimental
{
    /// <summary>
    /// Class representing a function key in the non native keyboard
    /// </summary>
    /// <remarks>
    /// This is an experimental feature. This class is early in the cycle, it has 
    /// been labeled as experimental to indicate that it is still evolving, and 
    /// subject to change over time. Parts of the MRTK, such as this class, appear 
    /// to have a lot of value even if the details haven’t fully been fleshed out. 
    /// For these types of features, we want the community to see them and get 
    /// value out of them early enough so to provide feedback. 
    /// </remarks>
    public class NonNativeFunctionKey : NonNativeKey
    {
        [SerializeField]
        private GameObject[] keys;

        private AudioManager audioManager;

        void Start()
        {
            audioManager = GameObject.Find("AudioManager").GetComponent<AudioManager>();
        }

        /// <summary>
        /// Possible functionalities for a function key.
        /// </summary>
        public enum Function
        {
            /// <summary>
            /// No valid function key has been set.
            /// </summary>
            Undefined = 0,
            /// <summary>
            /// If SubmitOnEnter is enabled, this function key closes the keyboard. Otherwise, adds a new line. 
            /// </summary>
            Enter = 1,
            /// <summary>
            /// Adds a tab.
            /// </summary>
            Tab = 2,
            /// <summary>
            /// Switches from the symbol key section to the alpha key section.
            /// </summary>
            Alpha = 3,
            /// <summary>
            /// Switches from the alpha key section to the symbol key section.
            /// </summary>
            Symbol = 4,
            /// <summary>
            /// Moves the carat back one index.
            /// </summary>
            Previous = 5,
            /// <summary>
            /// Moves the carat forward one index.
            /// </summary>
            Next = 6,
            /// <summary>
            /// Shifts all of the NonNativeValueKeys until the next character is typed.
            /// </summary>
            Shift = 7,
            /// <summary>
            /// Shifts all of the NonNativeValueKeys until CapsLock is disabled.
            /// </summary>
            CapsLock = 8,
            /// <summary>
            /// Adds a space.
            /// </summary>
            Space = 9,
            /// <summary>
            /// Deletes the previous character, or the selected characters.
            /// </summary>
            Backspace = 10,
            /// <summary>
            /// Closes the keyboard. 
            /// </summary>
            Close = 11,
            /// <summary>
            /// Starts and ends dictation.
            /// </summary>
            Dictate = 12,



            KanaConvert = 13,



            Change = 14,
        }

        /// <summary>
        /// The function of this key.
        /// </summary>
        [field: SerializeField, Tooltip("The function of this key.")]
        public Function KeyFunction { get; set; } = Function.Undefined;

        /// <inheritdoc/>
        protected override void FireKey()
        {

            audioManager.PlayClickSound();
            if (KeyFunction == Function.CapsLock)
            {
                foreach (GameObject key in keys) {
                    for (int i = 0; i < key.transform.childCount; i++)
                    {
                        key.transform.GetChild(i).GetComponent<NonNativeValueKey>().CapsLock();
                    }
                }
            }
            else
            {
                NonNativeKeyboard.Instance.ProcessFunctionKeyPress(this);
            }
        }
    }
}
