namespace testapplication_IUD
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tb_ID = new System.Windows.Forms.TextBox();
            this.tb_Name = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.dg1 = new System.Windows.Forms.DataGridView();
            this.cb1 = new System.Windows.Forms.ComboBox();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.virajToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.raviToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.rajToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.abcToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.abcToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.abcToolStripMenuItem2 = new System.Windows.Forms.ToolStripMenuItem();
            this.abcToolStripMenuItem3 = new System.Windows.Forms.ToolStripMenuItem();
            this.abcToolStripMenuItem4 = new System.Windows.Forms.ToolStripMenuItem();
            this.abcToolStripMenuItem5 = new System.Windows.Forms.ToolStripMenuItem();
            ((System.ComponentModel.ISupportInitialize)(this.dg1)).BeginInit();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // tb_ID
            // 
            this.tb_ID.Location = new System.Drawing.Point(162, 58);
            this.tb_ID.Name = "tb_ID";
            this.tb_ID.Size = new System.Drawing.Size(100, 20);
            this.tb_ID.TabIndex = 0;
            // 
            // tb_Name
            // 
            this.tb_Name.Location = new System.Drawing.Point(162, 97);
            this.tb_Name.Name = "tb_Name";
            this.tb_Name.Size = new System.Drawing.Size(100, 20);
            this.tb_Name.TabIndex = 1;
            this.tb_Name.MouseClick += new System.Windows.Forms.MouseEventHandler(this.tb_Name_MouseClick);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(98, 61);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(18, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "ID";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(98, 97);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Name";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(162, 136);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 4;
            this.button1.Text = "Submit";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(162, 175);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 5;
            this.button2.Text = "Update";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(380, 228);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(75, 23);
            this.button3.TabIndex = 7;
            this.button3.Text = "View";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // dg1
            // 
            this.dg1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dg1.Location = new System.Drawing.Point(301, 48);
            this.dg1.Name = "dg1";
            this.dg1.Size = new System.Drawing.Size(240, 150);
            this.dg1.TabIndex = 8;
            // 
            // cb1
            // 
            this.cb1.FormattingEnabled = true;
            this.cb1.Location = new System.Drawing.Point(162, 204);
            this.cb1.Name = "cb1";
            this.cb1.Size = new System.Drawing.Size(121, 21);
            this.cb1.TabIndex = 9;
            this.cb1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            this.cb1.MouseClick += new System.Windows.Forms.MouseEventHandler(this.cb1_MouseClick);
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.CustomFormat = "yyyy-MM-dd";
            this.dateTimePicker1.Format = System.Windows.Forms.DateTimePickerFormat.Custom;
            this.dateTimePicker1.Location = new System.Drawing.Point(162, 246);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(146, 20);
            this.dateTimePicker1.TabIndex = 10;
            this.dateTimePicker1.Value = new System.DateTime(2020, 4, 15, 0, 0, 0, 0);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.virajToolStripMenuItem,
            this.raviToolStripMenuItem,
            this.rajToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(553, 24);
            this.menuStrip1.TabIndex = 11;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // virajToolStripMenuItem
            // 
            this.virajToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.abcToolStripMenuItem,
            this.abcToolStripMenuItem1});
            this.virajToolStripMenuItem.Name = "virajToolStripMenuItem";
            this.virajToolStripMenuItem.Size = new System.Drawing.Size(41, 20);
            this.virajToolStripMenuItem.Text = "viraj";
            // 
            // raviToolStripMenuItem
            // 
            this.raviToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.abcToolStripMenuItem4,
            this.abcToolStripMenuItem5});
            this.raviToolStripMenuItem.Name = "raviToolStripMenuItem";
            this.raviToolStripMenuItem.Size = new System.Drawing.Size(38, 20);
            this.raviToolStripMenuItem.Text = "ravi";
            // 
            // rajToolStripMenuItem
            // 
            this.rajToolStripMenuItem.Name = "rajToolStripMenuItem";
            this.rajToolStripMenuItem.Size = new System.Drawing.Size(32, 20);
            this.rajToolStripMenuItem.Text = "raj";
            this.rajToolStripMenuItem.Click += new System.EventHandler(this.rajToolStripMenuItem_Click);
            // 
            // abcToolStripMenuItem
            // 
            this.abcToolStripMenuItem.Name = "abcToolStripMenuItem";
            this.abcToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.abcToolStripMenuItem.Text = "abc";
            // 
            // abcToolStripMenuItem1
            // 
            this.abcToolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.abcToolStripMenuItem2,
            this.abcToolStripMenuItem3});
            this.abcToolStripMenuItem1.Name = "abcToolStripMenuItem1";
            this.abcToolStripMenuItem1.Size = new System.Drawing.Size(180, 22);
            this.abcToolStripMenuItem1.Text = "abc";
            // 
            // abcToolStripMenuItem2
            // 
            this.abcToolStripMenuItem2.Name = "abcToolStripMenuItem2";
            this.abcToolStripMenuItem2.Size = new System.Drawing.Size(180, 22);
            this.abcToolStripMenuItem2.Text = "abc";
            this.abcToolStripMenuItem2.Click += new System.EventHandler(this.abcToolStripMenuItem2_Click);
            // 
            // abcToolStripMenuItem3
            // 
            this.abcToolStripMenuItem3.Name = "abcToolStripMenuItem3";
            this.abcToolStripMenuItem3.Size = new System.Drawing.Size(180, 22);
            this.abcToolStripMenuItem3.Text = "abc";
            // 
            // abcToolStripMenuItem4
            // 
            this.abcToolStripMenuItem4.Name = "abcToolStripMenuItem4";
            this.abcToolStripMenuItem4.Size = new System.Drawing.Size(180, 22);
            this.abcToolStripMenuItem4.Text = "abc";
            // 
            // abcToolStripMenuItem5
            // 
            this.abcToolStripMenuItem5.Name = "abcToolStripMenuItem5";
            this.abcToolStripMenuItem5.Size = new System.Drawing.Size(180, 22);
            this.abcToolStripMenuItem5.Text = "abc";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(553, 308);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.cb1);
            this.Controls.Add(this.dg1);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.tb_Name);
            this.Controls.Add(this.tb_ID);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.dg1)).EndInit();
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox tb_ID;
        private System.Windows.Forms.TextBox tb_Name;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.DataGridView dg1;
        private System.Windows.Forms.ComboBox cb1;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem virajToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem abcToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem abcToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem abcToolStripMenuItem2;
        private System.Windows.Forms.ToolStripMenuItem abcToolStripMenuItem3;
        private System.Windows.Forms.ToolStripMenuItem raviToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem abcToolStripMenuItem4;
        private System.Windows.Forms.ToolStripMenuItem abcToolStripMenuItem5;
        private System.Windows.Forms.ToolStripMenuItem rajToolStripMenuItem;
    }
}

