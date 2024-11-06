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
        [SerializeField]
        private GameObject UI;

        private Stopwatch stopwatch;

        private GameObject resultUI;
        private GameObject countDownUI;

        public bool counting = false;
        private int missCount = 0; //何回ミスしたか
        private int sentNum = 0;  //何番目の文章を計測するか
        private int charNum = 0;  //何番目の文字を判定するか

        private string[] sentences =
        {
            "いろはにほへとちりぬるを",
            "わたるせけんにおにはない",
            "はやおきはさんもんのとく",
            "ぼくのぱぱはまんがかです",
            "いっきょしゅいっとうそく",
        };


        void Start()
        {

            InputField.GetComponent<TextMeshProUGUI>().text = sentences[sentNum];

            stopwatch = new Stopwatch();

            countDownUI = UI.transform.Find("CountDownUI").gameObject;
            resultUI = UI.transform.Find("ResultUI").gameObject;
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
            resultUI.SetActive(false);

            sentNum++;
            if(sentNum >= sentences.Length) sentNum = 0;

            InputField.GetComponent<TextMeshProUGUI>().text = sentences[sentNum];
        }

        public void CountbuttonClick()
        {
            if (!counting)
            {
                StartCoroutine(ShowUIRoutine());
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
                    ShowResultUI();
                }
            }
            else
            {
                missCount++;
            }

            return isCurrect;
        }


        IEnumerator ShowUIRoutine()
        {
            countDownUI.transform.Find("Panel/Text").GetComponent<TextMeshProUGUI>().text = "「" + sentences[sentNum] + "」";

            countDownUI.SetActive(true);

            yield return new WaitForSeconds(3f);

            countDownUI.SetActive(false);

            CountStart();

        }

        private void CountStart()
        {
            charNum = 0;
            missCount = 0;
            stopwatch.Reset();
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

        private void ShowResultUI()
        {

            resultUI.transform.Find("Panel/Text").GetComponent<TextMeshProUGUI>().text
                = "秒数：" + stopwatch.Elapsed.TotalSeconds.ToString("0.00") + "　　ミス数：" + missCount;

            resultUI.SetActive(true);
        }

    }
}
