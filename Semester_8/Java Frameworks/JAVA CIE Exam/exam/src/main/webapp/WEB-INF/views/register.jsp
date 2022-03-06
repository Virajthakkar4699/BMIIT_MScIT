<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">

</head>
<body>

<div class="container" mt-5>
	<form action="store" method="post" modelAttribute="bean">
  
  
  <!-- Email input -->
  <div class="form-outline mb-4">
    <input type="text" id="form3Example3" class="form-control" name="username"/>
    <label class="form-label" for="form3Example3">User Name</label>
  </div>
  
  <!-- Email input -->
  <div class="form-outline mb-4">
    <input type="text" id="form3Example3" class="form-control" name="c_name"/>
    <label class="form-label" for="form3Example3">Customer Name</label>
  </div>

  <!-- Email input -->
  <div class="form-outline mb-4">
    <input type="email" id="form3Example3" class="form-control" name="email"/>
    <label class="form-label" for="form3Example3">Email address</label>
  </div>
  
  <!-- Email input -->
  <div class="form-outline mb-4">
    <input type="text" id="form3Example3" class="form-control" name="city"/>
    <label class="form-label" for="form3Example3">City</label>
  </div>
  
  <!-- Email input -->
  <div class="form-outline mb-4">
    <input type="text" id="form3Example3" class="form-control" name="pincode"/>
    <label class="form-label" for="form3Example3">Pincode</label>
  </div>

  <!-- Password input -->
  <div class="form-outline mb-4">
    <input type="password" id="form3Example4" class="form-control" name="password" />
    <label class="form-label" for="form3Example4">Password</label>
  </div>

  <!-- Submit button -->
  <button type="submit" class="btn btn-primary btn-block mb-4">Sign up</button>

 
  </div>
</form>
</div>

</body>
</html>