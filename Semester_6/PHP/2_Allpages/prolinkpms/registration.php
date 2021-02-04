<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <div>
        <?php
        include 'header.php';
        ?>
    </div>
        
        
        
        
        <div class="container" style="margin-top: 3%">
            <form method="post" action="#">
    <div class="form-group" style="margin-top: 2%">
    <label for="name">Your Name</label>
    <input type="email" class="form-control" id="name" aria-describedby="emailHelp" placeholder="Enter Name">
    
  </div>
  <div class="form-group" style="margin-top: 2%">
    <label for="email1">Email</label>
    <input type="email" class="form-control" id="email1" placeholder="Email">
  </div>
    
    <div class="form-group" style="margin-top: 2%">
        <label for="Institute">Institute Name</label>
        <input type="text" class="form-control" id="institute" placeholder="College Name">
    </div>
    
    <div class="form-group" style="margin-top: 2%">
        <label for="newpass">Create Password</label>
        <input type="password" class="form-control" id="newpass" placeholder="Create New Password">
    </div>
  
    
    <div style="margin-top: 2%;margin-bottom: 2%">
  <button type="submit" class="btn btn-primary" >Submit</button>
  <button type="cancel" class="btn btn-secondary">Cancel</button>      
    </div>
  
</form>
            </div>        
        
        
        
        <div>
        <?php
        include 'footer.php';
        ?>
    </div>
    </body>
</html>
