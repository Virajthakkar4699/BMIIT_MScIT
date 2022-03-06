<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<%@ page isELIgnored="false" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Register student</title>
</head>
<body>
<form action="addstud" method="post">  
  <label>ID:</label>
  	<input type="text" id="id" name="id"><br><br>
  <label>Name:</label>
  	<input type="text" id="name" name="name"><br><br>
  <input type="submit" value="Submit" name="submit">
  <input type="submit" value="View" name="view">
</form>
${newstud}

<table class="table table-bordered" style="width: 300px">
  <tr>
    <th>Id</th>
    <th>Name</th>
  </tr>
  <c:forEach items="${studentlist}" var="student">
	  <tr>
	    <td width="60" align="center">${student.id}</td>
	    <td width="60" align="center">${student.name}</td>
	  </tr>
 </c:forEach>
</table>


</body>
</html>