/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author Viraj Thakkar
 */
@WebServlet(urlPatterns = {"/Authentication"})
public class Authentication extends HttpServlet {

    @Override
  public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException
  {
        res.setContentType("text/html");
        String name =req.getParameter("username");
        String pass =req.getParameter("password");
        PrintWriter pw=res.getWriter();
        
        ServletContext ctx=getServletContext();
        String user=ctx.getInitParameter("user");
        String password=ctx.getInitParameter("pass");
        
        if(name.equals(user) && pass.equals(password))
        {
            RequestDispatcher rd=req.getRequestDispatcher("WelcomPage");
            rd.forward(req, res);
        }
        else
        {
           pw.println("<font color='red'>");
           pw.println("Oops...!--login failed please enter valid username and password");
           pw.println("</font> ");
           RequestDispatcher rd=req.getRequestDispatcher("/index.html");
           rd.include(req,res);
        }
  }
}
