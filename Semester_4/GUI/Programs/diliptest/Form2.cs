using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace diliptest
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog ofd = OpenFileDialog();
            ofd.Title = "Open a Text File";
            ofd.Filter = "Text Files | *.txt | All Files(*.*) | *.*;";
            DialogResult dr = ofd.ShowDialog();
            if (dr == DialogResult.OK)
            {
                StreamReader sr = new StreamReader(ofd.FileName);
                richTextBox1.Text = sr.ReadToEnd();
                sr.Close();
            }

        }

        private OpenFileDialog OpenFileDialog()
        {
            throw new NotImplementedException();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            SaveFileDialog sfdlg = new SaveFileDialog();
            sfdlg.Filter = "Text File (*.txt) | *.txt";
            if (sfdlg.ShowDialog() == DialogResult.OK)
            {
                //StreamWriter wr = new StreamWriter(
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
          
        }
    }
}
