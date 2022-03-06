<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
pageEncoding="ISO-8859-1"%>
<%@page isELIgnored ="false" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<h2>Register page </h2>

<form:form action="store" method="post" modelAttribute="bean" >
Enter roll: <form:input path="roll"/><br/><br/>
Enter name: <form:input path="name"/><br/><br/>

<input type="submit" value="Register">
<br/>
<h2>${msg }</h2>
</form:form>
</body>
</html>