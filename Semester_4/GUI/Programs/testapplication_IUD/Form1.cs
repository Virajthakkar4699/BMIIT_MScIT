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

namespace testapplication_IUD
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                SqlConnection con = new SqlConnection(@"Data Source=VIRAJ-PC\SQLEXPRESS;Initial Catalog=test;Integrated Security=True");
                SqlCommand cmd = new SqlCommand("sp_insert", con);
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.Parameters.AddWithValue("@tid", tb_ID.Text);
                cmd.Parameters.AddWithValue("@tname", tb_Name.Text);
                cmd.Parameters.AddWithValue("@tdate", dateTimePicker1.Text);
                con.Open();
                cmd.ExecuteNonQuery();
                MessageBox.Show("Inserted");
                con.Close();
            }
           catch (Exception ex)
            {
                    MessageBox.Show(ex.ToString());
            }    
            //Data String
            //Data Source=VIRAJ-PC\SQLEXPRESS;Initial Catalog=test;Integrated Security=True

        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                SqlConnection con = new SqlConnection(@"Data Source=VIRAJ-PC\SQLEXPRESS;Initial Catalog=test;Integrated Security=True");
                SqlCommand cmd = new SqlCommand("sp_update", con);
                cmd.CommandType = CommandType.StoredProcedure;
                cmd.Parameters.AddWithValue("@tid", tb_ID.Text);
                cmd.Parameters.AddWithValue("@tname", tb_Name.Text);
                con.Open();
                cmd.ExecuteNonQuery();
                MessageBox.Show("Updated");
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                SqlConnection con = new SqlConnection(@"Data Source=VIRAJ-PC\SQLEXPRESS;Initial Catalog=test;Integrated Security=True");
                //SqlCommand cmd = new SqlCommand("sp_view", con);
                SqlDataAdapter adp = new SqlDataAdapter("sp_view", con);
                adp.SelectCommand.CommandType = CommandType.StoredProcedure;
                DataTable dt = new DataTable();
                con.Open();
                adp.Fill(dt);
                con.Close();
                dg1.DataSource = dt;

                //dateTimePicker1.Format = DateTimePickerFormat.Long;
                //dateTimePicker1.Value = DateTime.Today;

                DateTime dtvar;
                dtvar= dateTimePicker1.Value;
                MessageBox.Show(""+dateTimePicker1.Value.Date.ToString("yyyy-MM-dd"));
                

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
           // MessageBox.Show("abc");
        }

        private void cb1_MouseClick(object sender, MouseEventArgs e)
        {
            //MessageBox.Show("abc");
            SqlConnection con = new SqlConnection(@"Data Source=VIRAJ-PC\SQLEXPRESS;Initial Catalog=test;Integrated Security=True");
            //SqlCommand cmd = new SqlCommand("sp_view", con);
            SqlDataAdapter adp = new SqlDataAdapter("sp_viewcb1", con);
            adp.SelectCommand.CommandType = CommandType.StoredProcedure;
            DataTable dt = new DataTable();
            con.Open();
            adp.Fill(dt);
            con.Close();
            cb1.ValueMember = "name";
            //cb1.DisplayMember = "name";
            cb1.DataSource = dt;
            //dg1.DataSource = dt;
            //MessageBox.Show(cb1.Text);
        }

        private void tb_Name_MouseClick(object sender, MouseEventArgs e)
        {
            String s=cb1.SelectedValue.ToString();
           // MessageBox.Show(s);
            tb_Name.Text = s;
        }

        private void rajToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void abcToolStripMenuItem2_Click(object sender, EventArgs e)
        {

        }
    }
}
