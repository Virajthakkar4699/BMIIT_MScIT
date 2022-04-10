'use strict';

//strting of global and outer variables
const express=require('express');

// start the local variables
const app= express();
const APPLICATION_PORT=5000;

app.get("/",(req,res)=>{
    
    return res.send(`Server is up and running at ${(new Date).toUTCString()}`);

});

app.listen(APPLICATION_PORT,(error)=>{

    if(error){
        console.log("Error Occured",error);
        return process.exit(1);
    }
    console.log(`Application started on ${APPLICATION_PORT} Port`);
    console.log(`Application Started on http://localhost:${APPLICATION_PORT}/`);

})

