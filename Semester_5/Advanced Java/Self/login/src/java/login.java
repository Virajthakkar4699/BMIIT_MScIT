import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Priya Kanabar
 */
public class login extends HttpServlet{
    
  @Override
  public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException
    {
        
       RequestDispatcher rd;
        String name =req.getParameter("username");
        String pass =req.getParameter("password");
        PrintWriter pw=res.getWriter();
        ServletContext scr= getServletContext();
       String Name=scr.getInitParameter("Fname");
       String Pass=scr.getInitParameter("Password");
        if(name.equals(Name) && pass.equals(Pass))
        {
            res.setContentType("text/html");
            rd=req.getRequestDispatcher("s2");
            req.setAttribute("name",Name);
            rd.forward(req,res);
          
        }
        else
        {
             //res.sendRedirect("s3?name="+name+);
             
           
           res.setContentType("text/html");
           pw.println("<center>");
           rd=req.getRequestDispatcher("/index.html");
           rd.include(req,res);
           pw.println("<font color='red'>");
           pw.println("login failed please enter valid username and password");
           pw.println("</center>");
        }
    }
    
}
