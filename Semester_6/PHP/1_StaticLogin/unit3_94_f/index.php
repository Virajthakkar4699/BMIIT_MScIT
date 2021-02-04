<?php
ob_start();
?>
<!DOCTYPE html>
<!--
To change this license header, choose License Headers in Project Properties.
To change this template file, choose Tools | Templates
and open the template in the editor.
-->
<html>
    <head>
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-giJF6kkoqNQ00vy+HMDP7azOuL0xtbfIcaT9wjKHr8RbDVddVHyTfAAsrekwKmP1" crossorigin="anonymous">
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        
    <div class="container">
       
        <form method="post" action="#" class="form-group">
        <div class="input-group mb-3">
        Enter Username:
        <input type="text" name="username" ><br>
        Enter Password:
        <input type="password" name="pass" required="true"><br>
        <input type="submit" name="submit" class="btn btn-primary">
        </div>
       
    </div>
        
        </form>
        <?php
        
        if($_POST["submit"]!=NULL)
        {
            
        
        $pass=$_POST["pass"];
        
        if ($_POST["username"]=='admin' && $pass='admin')
        {
            echo 'done';
            
            header("Location:success.php");
           // echo "<script> location.href='success.php'; </script>";
        }
        else 
        {
            echo 'fail';
             header("Location:failure.php");
           //  echo "<script> location.href='failure.php'; </script>";
        }
        }
       
        // put your code here
        ?>
    </body>
</html>
<?php
ob_flush();
?>