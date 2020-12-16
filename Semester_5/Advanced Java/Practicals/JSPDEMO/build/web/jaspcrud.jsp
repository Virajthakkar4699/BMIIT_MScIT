<%-- 
    Document   : jaspcrud
    Created on : 16 Dec, 2020, 3:25:35 PM
    Author     : 201806100110094
--%>

<%@page import="javax.resource.spi.ConnectionManager"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.sql.*"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>JSP CRUD</h1>
        <%
            try
            {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/virajtest","root","root");
            Statement stmt=con.createStatement();
            String query="select * from tbluser";
            ResultSet rs=stmt.executeQuery(query);
            
                while(rs.next())
                {   
                    out.print("Username: ");
                    out.println(rs.getString(1));
                    out.print("Password: ");
                    out.println(rs.getString(2));
                    out.println("<br>");
                }
            
            
            } 
            catch (Exception e)
            {
                e.getMessage();
            }
            
            
            
        %>
    </body>
</html>
