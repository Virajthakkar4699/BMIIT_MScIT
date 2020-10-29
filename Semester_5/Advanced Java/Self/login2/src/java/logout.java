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

public class logout extends HttpServlet 
{
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException 
    {
        res.setContentType("text/html");
        PrintWriter pw=res.getWriter();
        HttpSession session=req.getSession(false);
        if(session!=null)
        {
        session.invalidate();
        pw.println("<center style='background-color:cyan'>");
         pw.println("<a href='index.html'>Index</a> <br><br>");
        pw.println("You are successfully logged out..!");
		pw.println("<br>");
        pw.println("</center>");
        }
        else
        {
            res.sendRedirect("Login.html");
        }
        
        }
    } 