<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@taglib prefix="form" uri="http://www.springframework.org/tags/form" %>
    <%@page isELIgnored = "false" %>
    
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<center>
	<h2>FORM</h2>
	<form:form method="post" action="store" modelAttribute="bean">
		Enter roll : <form:input path="roll"/><br/>
		Enter name : <form:input path="name"/><br/>
		Enter email : <form:input path="email"/><br/>
		Enter mobile : <form:input path="mobile"/><br/>
		
		<input type = "submit" value="Register">

	<h2>${msg}</h2>
	</form:form>	
</center>
</body>
</html>