import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Priya Kanabar
 */
public class LoginServlet extends HttpServlet 
{
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException 
    {
        res.setContentType("text/html");
        String u=req.getParameter("uname");
        String p=req.getParameter("pass");
        PrintWriter pw=res.getWriter();
        HttpSession session=req.getSession();
        session.setMaxInactiveInterval(180);
        if(u.equals("priya")&& p.equals("priya123"))
        {
            session.setAttribute("uname",u);
            res.sendRedirect("./Profile");
        }
        else
        {
            pw.println("Wrong username or password");
            res.sendRedirect("Login.html");
        }
    }

}