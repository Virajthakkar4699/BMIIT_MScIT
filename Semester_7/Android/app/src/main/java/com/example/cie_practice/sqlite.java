package com.example.cie_practice;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

import com.example.cie_practice.data.MydbHelper;
import com.example.cie_practice.model.Contact;

import java.util.List;

public class sqlite extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_sqlite);

        MydbHelper db=new MydbHelper(sqlite.this);
        //adding contact to db
        Contact viraj = new Contact();
        viraj.setName("Viraj Thakkar");
        viraj.setPhoneNumber("84669904699");
        db.addcontact(viraj);
       // Log.d("SQLABC","ID For VIRAJ is "+viraj.getId());

        Contact ketan = new Contact();
        ketan.setName("Ketan Thakkar");
        ketan.setPhoneNumber("9825118350");
        db.addcontact(ketan);
        Log.d("SQLABC","ID For KETAN is "+ketan.getId() + " ID For Viraj is "+viraj.getId());

        //get all contacts
        List<Contact> allcontacts=db.getallcontacts();
        for (Contact contact:allcontacts)
        {
            Log.d("SQLABC","ID : "+contact.getId() +
                                     " NAME : "+contact.getName() +
                                     " Phonenumber : "+contact.getPhoneNumber()+"\n");
        }


    }
}