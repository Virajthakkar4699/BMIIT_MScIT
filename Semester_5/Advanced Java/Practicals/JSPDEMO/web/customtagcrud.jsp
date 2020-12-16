<%-- 
    Document   : customtagcrud
    Created on : 16 Dec, 2020, 3:37:13 PM
    Author     : 201806100110094
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib uri="/WEB-INF/tlds/mytags.tld" prefix="v" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body >
        <h1>Custom Tag CRUD</h1>
        <form method="post">
        Enter Colour:
        <input type="text" name="colour" placeholder="Colour">
        <input type="submit" name="submit">
        </form>
        <br>
        
        <v:colourchage colour="red" />
        
        
        
    </body>
</html>
