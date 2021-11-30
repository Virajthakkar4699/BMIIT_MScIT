package com.example.cie_practice.data;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

import androidx.annotation.Nullable;

import com.example.cie_practice.model.Contact;
import com.example.cie_practice.params.Params;

import java.util.ArrayList;
import java.util.List;

public class MydbHelper extends SQLiteOpenHelper {

    public MydbHelper(Context context){
        super(context, Params.DB_NAME,null,Params.DB_VERSION);
    }


    @Override
    public void onCreate(SQLiteDatabase db) {

        String create= "CREATE TABLE "+ Params.TABLE_NAME + "("
                +Params.KEY_ID + " INTEGER PRIMARY KEY," + Params.KEY_NAME
                + " TEXT,"+ Params.KEY_PHONE + " TEXT" +")";

        String create2="CREATE TABLE contacts_table(id PRIMARY KEY,name TEXT, phone_number TEXT)";
        Log.d("SQLABC"," "+create2);

        db.execSQL(create2);

    }

    @Override
    public void onUpgrade(SQLiteDatabase sqLiteDatabase, int i, int i1) {

    }

    public void addcontact(Contact contact)
    {
        SQLiteDatabase db=this.getWritableDatabase();
        ContentValues values= new ContentValues();
        values.put(Params.KEY_NAME,contact.getName());
        values.put(Params.KEY_PHONE,contact.getPhoneNumber());
        db.insert(Params.TABLE_NAME,null,values);
        Log.d("SQLABC","Inserted");
        db.close();
    }

    public List<Contact> getallcontacts()
    {
        List<Contact> contactList=new ArrayList<>();
        SQLiteDatabase db=getReadableDatabase();
        //query
        String select ="SELECT * FROM "+Params.TABLE_NAME;
        Cursor cursor = db.rawQuery(select,null);
        if(cursor.moveToFirst())
        {
            do{
                Contact contact= new Contact();
                contact.setId(cursor.getInt(0));
                contact.setName(cursor.getString(1));
                contact.setPhoneNumber(cursor.getString(2));
            }while (cursor.moveToNext());
        }

        return contactList;
    }
}
