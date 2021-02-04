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
        
        <div class="container" style="margin-top: 3%;margin-bottom: 3%">
            <form method="post" action="#">
  <div class="form-group" style="margin-top: 2%">
    <label>Email address</label>
    <input type="email" name="emailid" class="form-control" aria-describedby="emailHelp" placeholder="Enter email">
  </div>
  <div class="form-group" style="margin-top: 2%">
    <label>Password</label>
    <input type="password" name="passwrd" class="form-control" placeholder="Password">
  </div>
  <button type="submit" name="submit" class="btn btn-primary" style="margin-top: 2%">Submit</button>
</form>
          
    <?php
        
        if(isset($_POST["submit"]))
        {
        
            if ($_POST["emailid"]=='admin@gmail.com' && $_POST["passwrd"]='admin')
            {
                //echo 'done';

                //header("Location:index.php");
               // echo "<script> location.href='success.php'; </script>";
              
               echo '<script>alert("logged in")</script>'; 
            }
            else 
            {
                //echo 'fail';
                // header("Location:login.php");
               //  echo "<script> location.href='failure.php'; </script>";
                echo '<script>alert("failed ")</script>';
            }
        }
       
        
        ?>        
            
            
    </div>
        
        <div>
        <?php
        include 'footer.php';
        ?>
    </div>
        
    </body>
</html>
