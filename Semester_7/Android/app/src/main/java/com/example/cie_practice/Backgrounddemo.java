package com.example.cie_practice;

import androidx.appcompat.app.AppCompatActivity;

import android.os.AsyncTask;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;

public class Backgrounddemo extends AppCompatActivity {

    public class bg extends AsyncTask<String,Void,String>
    {
        @Override
        protected void onPreExecute() {
            super.onPreExecute();
            Log.d("VIRAJBG","Pre-execute");
        }

        @Override
        protected void onPostExecute(String s) {
            super.onPostExecute(s);
            Log.d("VIRAJBG","POST_EXECUTE");
            Log.d("VIRAJBG",s);
        }

        @Override
        protected String doInBackground(String... strings) {
            Log.d("VIRAJBG","Do in Background");
            for (int i=0;i<=100;i++)
            {
                Toast.makeText(getApplicationContext(), ""+i, Toast.LENGTH_SHORT).show();
            }
           /* URL url;
            HttpURLConnection conn;
            try {
                String[] urls;
                String result=null;
                url=new URL(urls[0]);
                conn=(HttpURLConnection) url.openConnection();
                InputStream in= conn.getInputStream();
                InputStreamReader reader = new InputStreamReader(in);
                int data= reader.read();
                while(data!=-1)
                {
                    char current=(char)data;
                    result += current;
                    data =reader.read();

                }
            }
            catch (Exception e)
            {
                e.printStackTrace();
                return "ERROR";
            }*/
            return "Viraj";
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_backgrounddemo);
        bg mystask=new bg();
        mystask.execute("www.google.com");


        //Button btn=findViewById(R.id.btn);

       /* btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Toast.makeText(getApplicationContext(), "BACK", Toast.LENGTH_SHORT).show();
            }
        });*/

    }
}