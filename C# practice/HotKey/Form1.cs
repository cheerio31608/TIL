using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Key
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        //저장할 단축키 입력받기
        private void HotKey_KeyDown(object sender, KeyEventArgs e)
        {
            Keys key = e.KeyCode;
            string stkey = key.ToString();
            bool Ctrl = e.Control;
            string CtrKey = "Ctrl + " + stkey;
            //Ctrl + 키 입력시
            if (Ctrl == true)
            {
                this.currentHotKeyTextBox.Text = CtrKey;
            }
            //키 입력시
            else
                this.currentHotKeyTextBox.Text = stkey;
            
        }
        //단축키 저장소
        static string CurrentHotKey;
        //단축키 저장
        private void Change_HotKey(object sender, EventArgs e)
        {
            CurrentHotKey = this.currentHotKeyTextBox.Text;
            MessageBox.Show("변경되었습니다!");
            
        }

        //저장한 단축키 사용 예시
        private void PlayHotKey(object sender, KeyEventArgs e)
        {
            Keys Pkey = e.KeyCode;
            string Pstkey = Pkey.ToString();
            string PCtrKey = "";
            if (e.Control == true)
            {
                PCtrKey = "Ctrl + " + Pstkey;
            }
            //Ctrl + 키 입력시
            if(PCtrKey.Equals(CurrentHotKey) == true)    
            {
                MessageBox.Show("단축키 실행");
            }
            //키 입력시
            else if(Pstkey.Equals(CurrentHotKey) == true && e.Control == false)
            {
                MessageBox.Show("단축키 실행");
            }
                
        }
    }
}
