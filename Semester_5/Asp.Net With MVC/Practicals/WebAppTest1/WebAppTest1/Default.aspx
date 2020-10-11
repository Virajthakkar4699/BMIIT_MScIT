<!DOCTYPE html>
<html lang="en">
<head>
  <title>Bootstrap Example</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/js/bootstrap.min.js"></script>
</head>
<body>
<div class="container">
<nav class="navbar navbar-expand-sm bg-info navbar-dark">
  <div class="container-fluid">
    <div class="navbar-header">
      <a class="navbar-brand" href="#">Book Mania</a>
    </div>

      <img alt="" src="https://www.google.com/search?q=images&sxsrf=ALeKk00ifrwWXTI1h4IELg238OhtC2vdHw:1597934710178&tbm=isch&source=iu&ictx=1&fir=wW5BhncqphFQ0M%252CLlgDpz1LoiuznM%252C_&vet=1&usg=AI4_-kTDjFrEfJe5fGPioNmBkXcDEyTFBg&sa=X&ved=2ahUKEwjb1JjWgqrrAhWBzjgGHTgtDhAQ9QEwAHoECAgQMQ&biw=1366&bih=654#imgrc=wW5BhncqphFQ0M" />

    <ul class="nav navbar-nav">
      <li class="active"><a href="home.html">Home</a></li>
      <li class="active"><a href="childbook.html">Children's Book</a></li>
      <li class="active"><a href="Schoolbook.html">School Book</a></li>
      <li class="active"><a href="Publishers.html">Publisher</a></li>
      </li>
    </ul>
    <ul class="nav navbar-nav navbar-right">
      <li><a href="Registration.html"><span class="glyphicon glyphicon-user"></span> Sign Up</a></li>
      <li><a href="Login Form.html"><span class="glyphicon glyphicon-log-in"></span> Login</a></li>
    </ul>
  </div>
</nav>  
  <div id="myCarousel" class="carousel slide" data-ride="carousel">
    <!-- Indicators -->
    <ol class="carousel-indicators">
      <li data-target="#myCarousel" data-slide-to="0" class="active"></li>
      <li data-target="#myCarousel" data-slide-to="1"></li>
      <li data-target="#myCarousel" data-slide-to="2"></li>
    </ol>

    <!-- Wrapper for slides -->
    <div class="carousel-inner">
      <div class="item active">
        <img src="1.jpg" alt="Image 1" style="width:100%;">
      </div>

      <div class="item">
        <img src="2.jpg" alt="Image 2" style="width:100%;">
      </div>
    
      <div class="item">
        <img src="3.jpg" alt="Image 3" style="width:100%;">
      </div>
    </div>

    <!-- Left and right controls -->
    <a class="left carousel-control" href="#myCarousel" data-slide="prev">
      <span class="glyphicon glyphicon-chevron-left"></span>
      <span class="sr-only">Previous</span>
    </a>
    <a class="right carousel-control" href="#myCarousel" data-slide="next">
      <span class="glyphicon glyphicon-chevron-right"></span>
      <span class="sr-only">Next</span>
    </a>
  </div> 
<div class="container">                
  <ul class="pager">
    <li><a href="Five.html">Previous</a></li>
    <li><a href="Six.html">Next</a></li>
  </ul>
</div>
<footer class="footer" style="background-color: #ADD8E6;">
    <div class="container">
        <div class="row">
            <div class="col-md-12 text-center">
                <br/>
                	
                		<ul>
                		<li class="active"><a href="home.html">Home</a></li>
      				<li class="active"><a href="childbook.html">Children's Book</a></li>
      				<li class="active"><a href="Schoolbook.html">School Book</a></li>
      				<li class="active"><a href="Publishers.html">Publisher</a></li>
                		</ul>
            </div>
        </div>
    </div>
</footer>
</div>
</body>
</html>
