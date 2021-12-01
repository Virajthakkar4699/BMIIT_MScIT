package com.example.cie_practice;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class Bdclass extends BroadcastReceiver {

    @Override
    public void onReceive(Context context, Intent intent) {
        if (intent.getAction().equals(intent.ACTION_PACKAGE_ADDED))
        {
            //NOTIF OR SMS CODE
        }

    }
}
