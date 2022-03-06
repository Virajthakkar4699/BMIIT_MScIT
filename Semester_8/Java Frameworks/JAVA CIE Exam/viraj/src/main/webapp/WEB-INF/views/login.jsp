<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
pageEncoding="ISO-8859-1"%>
<%@page isELIgnored="false" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<h2>${msg}</h2>
<body>
<h1>Login form</h1>
<form:form action="check" method="post" modelAttribute="bean">
Enter Roll:<form:input path="roll"/><br/>
Enter Name:<form:input path="name"/><br/>

<input type="submit" value="Login">
</form:form>
</body>
</html>
