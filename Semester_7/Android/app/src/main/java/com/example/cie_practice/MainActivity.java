package com.example.cie_practice;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.NotificationCompat;

import android.app.Notification;
import android.app.NotificationManager;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button playaud,playvid,sharedpref,volley,sqlite,notif,service,sms,telephony,broadcast;

        playaud=findViewById(R.id.playaudio);
        playvid=findViewById(R.id.playvid);
        sharedpref=findViewById(R.id.sharedpref);
        volley=findViewById(R.id.volley);
        sqlite=findViewById(R.id.sqlite);
        notif=findViewById(R.id.notif);
        service=findViewById(R.id.service);
        sms=findViewById(R.id.service);
        telephony=findViewById(R.id.telephony);
        broadcast=findViewById(R.id.Broadcast);

        playaud.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                startActivity(new Intent(getApplicationContext(),audio.class));

            }
        });

        playvid.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(getApplicationContext(),video.class));

            }
        });

        sharedpref.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(getApplicationContext(),sharedpref.class));
            }
        });

        volley.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                startActivity(new Intent(getApplicationContext(),volleytry.class));

            }
        });

        sqlite.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                startActivity(new Intent(getApplicationContext(),sqlite.class));

            }
        });

        notif.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Notification.Builder builder=
                        new Notification.Builder(getApplicationContext())
                                .setSmallIcon(R.mipmap.ic_launcher)
                        .setContentTitle("HHH")
                        .setContentText("fffghfhf")
                        .setAutoCancel(true);

                NotificationManager mgr=(NotificationManager)getSystemService(Context.NOTIFICATION_SERVICE);
                mgr.notify(0, builder.build());


            }
        });

        service.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(getApplicationContext(),Backgrounddemo.class));
            }
        });

        sms.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

            }
        });

        telephony.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

            }
        });

        broadcast.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(getApplicationContext(),broadcast.class));

            }
        });

    }
}