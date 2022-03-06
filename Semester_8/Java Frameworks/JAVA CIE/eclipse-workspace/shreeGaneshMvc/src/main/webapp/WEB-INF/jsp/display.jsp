<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
     <%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
    <%@page isELIgnored = "false" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>

</head>
<body>
<center>
	<h2>Display Data</h2>
	<table border="2" width="100%">
		<tr>
			<th>Roll No</th>
			<th>Name</th>
			<th>Email</th>
			<th>Mobile</th>
		</tr>
		<c:forEach var="tab" items="${data }">
		<tr>
			<td>${tab.name }</td>
			<td>${tab.email}</td>
		</tr>
		</c:forEach>
	</table>
</center>

</body>
</html>