using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace MixedReality.Toolkit.UX.Experimental
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
        private GameObject UI;
        [SerializeField]
        private GameObject ThemeArea;
        [SerializeField]
        public bool isFlickKeyboard;  //このキーボードがフリックキーボードかどうか

        private Stopwatch stopwatch;

        private GameObject resultUI;
        private GameObject countDownUI;

        private bool isCounting = false;  //計測しているかどうか
        private int missCount = 0; //何回ミスしたか
        private int sentNum = 0;  //何番目の単語
        private int charNum = 0;  //何番目の文字を判定するか

        private string[] sentences = null;

        private string[] sentences_kana =
        {
            "たんさん",
            "すぺしゃる",
            "えいかいわ",
            "おりょうり",
            "でんき",
            "ろうどう",
            "こたつ",
            "だっしゅつ",
        };

        private string[] sentences_alpha =
        {
            "tansan",
            "supesharu",
            "eikaiwa",
            "oryouri",
            "denki",
            "roudou",
            "kotatu",
            "dasshutu",
        };


        //シングルトン化
        public static KeyInputCountSystem Instance;

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
            if (isFlickKeyboard)
            {
                sentences = sentences_kana;
            }
            else
            {
                sentences = sentences_alpha;
            }

            stopwatch = new Stopwatch();

            countDownUI = UI.transform.Find("CountDownUI").gameObject;
            resultUI = UI.transform.Find("ResultUI").gameObject;
        }


        //ボタンを見たとき
        public void GazeAt()
        {
            if (isCounting)
            {
                button.GetComponent<Image>().color = new Color(1f, 0.50f, 0f); //usui red
            }
            else
            {
                button.GetComponent<Image>().color = new Color(0f, 0.50f, 1f); //usui blue
            }            
        }

        //ボタンから目を外したとき
        public void GazeAway()
        {
            if (isCounting)
            {
                button.GetComponent<Image>().color = new Color(1f, 0.15f, 0f); //koi red
            }
            else
            {
                button.GetComponent<Image>().color = new Color(0f, 0.15f, 1f); //koi blue
            }
        }


        //ボタンを押したとき
        public void CountbuttonClick()
        {
            if (!isCounting)
            {
                StartCoroutine(ShowUIRoutine());
            }
            else
            {
                CountStop();
            }
        }

        //リザルト画面を閉じるボタンを押したとき
        public void CloseResultUI()
        {
            resultUI.SetActive(false);
            ThemeArea.SetActive(false);
        }


        IEnumerator ShowUIRoutine()
        {
            ThemeArea.SetActive(true);
            ThemeArea.transform.Find("Text").GetComponent<TextMeshProUGUI>().text = "ここにお題が表示されます";

            countDownUI.SetActive(true);
            countDownUI.transform.Find("Text").GetComponent<TextMeshProUGUI>().text = "すぐに計測が始まります";
            
            yield return new WaitForSeconds(1.5f);

            countDownUI.SetActive(false);

            CountStart();

        }

        private void CountStart()
        {
            charNum = 0;
            sentNum = 0;
            missCount = 0;

            for (int i = sentences.Length - 1; i > 0; i--)
            {
                int j = Random.Range(0, i + 1); 
                string temp = sentences[i];
                sentences[i] = sentences[j];
                sentences[j] = temp;
            }

            stopwatch.Reset();
            stopwatch.Start();

            button.GetComponent<Image>().color = new Color(1f, 0.50f, 0f);  //usui red
            startIcon.SetActive(false);
            stopIcon.SetActive(true);

            isCounting = true;

            ThemeArea.transform.Find("Text").GetComponent<TextMeshProUGUI>().text = sentences[sentNum];
        }

        private void CountStop()
        {
            stopwatch.Stop();
            button.GetComponent<Image>().color = new Color(0f, 0.50f, 1f);  //usui blue
            startIcon.SetActive(true);
            stopIcon.SetActive(false);
            isCounting = false;

            ThemeArea.SetActive(false);
        }

        private void ShowResultUI()
        {
            ThemeArea.SetActive(true);
            ThemeArea.transform.Find("Text").GetComponent<TextMeshProUGUI>().text = "閉じる";

            resultUI.transform.Find("Text").GetComponent<TextMeshProUGUI>().text
                = "秒数：" + stopwatch.Elapsed.TotalSeconds.ToString("0.00") + "　　ミス数：" + missCount;

            resultUI.SetActive(true);
        }


        public (bool IsCurrect, bool IsComplete) Check(string input)
        {
            bool isCurrect = false;
            bool isComplete = false;

            if (sentences[sentNum][charNum] == input[0])
            {
                isCurrect = true;
                charNum++;

                if (charNum == sentences[sentNum].Length)
                {
                    charNum = 0;
                    sentNum++;
                    isComplete = true;

                    if (sentNum >= sentences.Length)
                    {
                        CountStop();
                        ShowResultUI();
                    }
                    else
                    {
                        ThemeArea.transform.Find("Text").GetComponent<TextMeshProUGUI>().text = sentences[sentNum];
                    }
                }
            }
            else
            {
                missCount++;
            }

            return (isCurrect, isComplete);
        }

        public bool GetIsCounting()
        {
            return isCounting;
        }

    }
}
