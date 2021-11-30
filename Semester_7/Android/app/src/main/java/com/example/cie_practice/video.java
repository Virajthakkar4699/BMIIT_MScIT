package com.example.cie_practice;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.MediaController;
import android.widget.VideoView;

public class video extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_video);
        VideoView vv=findViewById(R.id.vv);
        vv.setVideoPath("android.resource://" + getPackageName() + "/" + R.raw.vid);
        MediaController mediaController=new MediaController(this);
        vv.setMediaController(mediaController);
        mediaController.setAnchorView(vv);
        vv.start();
    }
}