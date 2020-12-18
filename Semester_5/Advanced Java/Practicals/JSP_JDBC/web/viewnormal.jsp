<%-- 
    Document   : viewnormal
    Created on : 15-Dec-2020, 10:29:56 pm
    Author     : Viraj
--%>

<%@page import="java.io.PrintWriter"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.sql.*" %>
<%@page import="javax.servlet.jsp.JspWriter" %>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>Hello World!</h1>
        <%
            try {
                   Class.forName("com.mysql.jdbc.Driver");  
                   Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/test","root","root");
                   Statement stmt=con.createStatement();
                   String sqlquery="select * from tbluser;";
                    
                   ResultSet rs=stmt.executeQuery(sqlquery);
                    
                    while(rs.next())
                    {
                       out.println(rs.getString("uname"));
                       out.println(rs.getString("password"));
                       out.println("<br>");
                    }
                    
                    
                }
            catch (Exception e) {
                e.printStackTrace();
                }
        %>
        
    </body>
</html>
