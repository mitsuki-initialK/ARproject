using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace MixedReality.Toolkit.UX
{
    public class KeyInputCountSystem : MonoBehaviour
    {
        [SerializeField]
        private GameObject startIcon;
        [SerializeField]
        private GameObject stopIcon;
        [SerializeField]
        private GameObject button;
        [SerializeField]
        private GameObject InputField;

        private Stopwatch stopwatch;

        public bool counting = false;
        private int missCount = 0; //âΩâÒÉ~ÉXÇµÇΩÇ©
        private int sentNum = 0;  //âΩî‘ñ⁄ÇÃï∂èÕÇåvë™Ç∑ÇÈÇ©
        private int charNum = 0;  //âΩî‘ñ⁄ÇÃï∂éöÇîªíËÇ∑ÇÈÇ©

        private string[] sentences =
        {
            "Ç¢ÇÎÇÕÇ…ÇŸÇ÷Ç∆ÇøÇËÇ ÇÈÇ",
            "ÇÌÇΩÇÈÇπÇØÇÒÇ…Ç®Ç…ÇÕÇ»Ç¢",
            "ÇÕÇ‚Ç®Ç´ÇÕÇ≥ÇÒÇ‡ÇÒÇÃÇ∆Ç≠",
        };


        void Start()
        {
            InputField.GetComponent<TextMeshProUGUI>().text = sentences[sentNum];
            stopwatch = new Stopwatch();
        }


        public void GazeAt()
        {
            if (counting)
            {
                button.GetComponent<Image>().color = new Color(1f, 0.50f, 0f); //usui red
            }
            else
            {
                button.GetComponent<Image>().color = new Color(0f, 0.50f, 1f); //usui blue
            }            
        }

        public void GazeAway()
        {
            if (counting)
            {
                button.GetComponent<Image>().color = new Color(1f, 0.15f, 0f); //koi red
            }
            else
            {
                button.GetComponent<Image>().color = new Color(0f, 0.15f, 1f); //koi blue
            }
        }


        public void SelectSentence()
        {
            sentNum++;
            if(sentNum >= sentences.Length) sentNum = 0;

            InputField.GetComponent<TextMeshProUGUI>().text = sentences[sentNum];
        }

        public void CountbuttonClick()
        {
            if (!counting)
            {
                CountStart();
            }
            else
            {
                CountStop();
            }
        }


        public bool Check(string input)
        {
            bool isCurrect = false;

            if (sentences[sentNum][charNum] == input[0])
            {
                isCurrect = true;
                charNum++;

                if (charNum == sentences[sentNum].Length)
                {
                    CountStop();
                }
            }
            else
            {
                missCount++;
            }

            return isCurrect;
        }


        private void CountStart()
        {
            charNum = 0;
            missCount = 0;
            stopwatch.Start();
            button.GetComponent<Image>().color = new Color(1f, 0.50f, 0f);  //usui red
            startIcon.SetActive(false);
            stopIcon.SetActive(true);
            counting = true;
        }

        private void CountStop()
        {
            stopwatch.Stop();
            button.GetComponent<Image>().color = new Color(0f, 0.50f, 1f);  //usui blue
            startIcon.SetActive(true);
            stopIcon.SetActive(false);
            counting = false;
        }

    }
}
