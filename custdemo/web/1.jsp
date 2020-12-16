<%-- 
    Document   : 1
    Created on : 16 Dec, 2020, 5:21:24 PM
    Author     : 201806100110094
--%>
<%@taglib uri="/WEB-INF/tlds/cust" prefix="d" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>hello</title>
    <form asction="1.jsp" method="post">
            <input type="text" name="name" placeholder="enter your name">
            <input type="text" name="number" placeholder="enter your number">
            <input type="submit" value="okie">            
        </form>
        <d:display name="${param.name}" number="${param.number}" />
        
    </head>
    <body>
        
    </body>
</html>
