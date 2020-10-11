/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author Viraj Thakkar
 */
@WebServlet(urlPatterns = {"/WelcomPage"})
public class WelcomPage extends HttpServlet {

    @Override
  public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException
    {
        res.setContentType("text/html");
        PrintWriter pw=res.getWriter();
        pw.println("Greetings from Welcome Page");
        pw.println("<input type=text> id='viraj'");
        
        
    }
   
}
