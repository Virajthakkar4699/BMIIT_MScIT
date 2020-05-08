using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Login
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            try
            {
                SqlConnection con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C: \Users\Viraj Thakkar\Desktop\Login\Database1.mdf;Integrated Security=True");
                SqlCommand cmd = new SqlCommand("insert into Table values('" + textBox1.Text + "','" + textBox2.Text + "')", con);
                con.Open();
                cmd.ExecuteNonQuery();
                con.Close();
                MessageBox.Show("data inserted");
            }
            catch
            {

            }

            
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
    }
}
