package com.example.cie_practice;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.widget.Toast;

import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.JsonArrayRequest;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.Volley;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class volleytry extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_volleytry);

        RequestQueue requestQueue;
        requestQueue= Volley.newRequestQueue(this);
        JsonObjectRequest jsonObjectRequest=new JsonObjectRequest(Request.Method.GET, "https://jsonplaceholder.typicode.com/todos/1",
                null, new Response.Listener<JSONObject>() {
            @Override
            public void onResponse(JSONObject response) {

                try {
                    Toast.makeText(getApplicationContext(), response.getString("title"), Toast.LENGTH_SHORT).show();
                } catch (JSONException e) {
                    e.printStackTrace();
                }


            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {

                Toast.makeText(getApplicationContext(), "ERROR", Toast.LENGTH_SHORT).show();

            }
        });
        requestQueue.add(jsonObjectRequest);

        ///////////////////////////

        RequestQueue requestQueue2;
        requestQueue2= Volley.newRequestQueue(this);
        JsonArrayRequest jsonArrayRequest=new JsonArrayRequest(Request.Method.GET, "https://jsonplaceholder.typicode.com/todos/",
                null, new Response.Listener<JSONArray>() {
            @Override
            public void onResponse(JSONArray response) {

                try {
                    for (int i=0 ;i<response.length();i++)
                    {
                        JSONObject object=response.getJSONObject(i);
                        //Toast.makeText(getApplicationContext(), object.getString("title"), Toast.LENGTH_SHORT).show();
                        Log.d("Titles",object.getString("title"));
                    }
                    //Toast.makeText(getApplicationContext(), response.getString("title"), Toast.LENGTH_SHORT).show();
                } catch (JSONException e) {
                    e.printStackTrace();
                }


            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {

                Toast.makeText(getApplicationContext(), error.getMessage(), Toast.LENGTH_SHORT).show();

            }
        });
        requestQueue2.add(jsonArrayRequest);

    }
}