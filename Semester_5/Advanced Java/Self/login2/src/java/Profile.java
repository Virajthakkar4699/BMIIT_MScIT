/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Priya Kanabar
 */
    
    
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class Profile extends HttpServlet 
{
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException 
    {
        res.setContentType("text/html");
        PrintWriter pw=res.getWriter();
        HttpSession session=req.getSession(false);
        if(session!=null)
        {
            String uname=(String)session.getAttribute("uname");
                pw.println("<center style='background-color:cyan'>");
                pw.println("<a href='index.html'>Index</a> &nbsp;&nbsp");
                pw.println(" <a href='./Logout'>Logout  </a> <br> <br> <br>");
                pw.println("Resume  <br>");
                pw.println("Personal Information <br>");
                pw.println("Name :  "+ uname+"<br>");
                pw.println("Date of birth : 6/5/2001 <br>");
                pw.println("Contact Number : 1234567891 <br>");
                pw.println("Email : admin@gmail.com <br>");
                pw.println("<br><br>");
                pw.println("Professional Information <br>");
                pw.println("Profession: Developer <br>");
                pw.println("Experience: 2 years <br>");
                pw.println("<br><br>");
                pw.println("Educational Information <br>");
                pw.println("Integrated M.sc");
                pw.println("</center>");   
        }
        else
        {
            res.sendRedirect("Login.html");
        }
		pw.println("<br>");
       
    }
}
