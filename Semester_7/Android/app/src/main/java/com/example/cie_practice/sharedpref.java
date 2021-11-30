package com.example.cie_practice;

import androidx.appcompat.app.AppCompatActivity;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class sharedpref extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sharedpref);

        Button save=findViewById(R.id.save);
        TextView tv=findViewById(R.id.textView);
        EditText edt=findViewById(R.id.edittext);

        save.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String msg= edt.getText().toString().trim();
                SharedPreferences shrd=getSharedPreferences("demo",MODE_PRIVATE);
                SharedPreferences.Editor editor=shrd.edit();
                editor.putString("str",msg);
                editor.apply();
                tv.setText(msg);
                edt.setText(null);
            }
        });

        SharedPreferences getshrd=getSharedPreferences("demo",MODE_PRIVATE);
        String x=getshrd.getString("str", "defvalue");
        tv.setText(x);

    }
}