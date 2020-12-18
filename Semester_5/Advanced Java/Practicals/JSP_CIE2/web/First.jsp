<%-- 
    Document   : First
    Created on : 03-Dec-2020, 12:34:21 pm
    Author     : Viraj
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<%@page import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>JSP Page</title>
</head>
<body>
<c:set var="name" value="Urja Naik" scope="request"/>


<br>
<h1> my name: <c:out value="${requestScope.name}"/></h1>
<br>
</body>
</html>

