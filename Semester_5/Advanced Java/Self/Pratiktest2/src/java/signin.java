
import static java.awt.Color.red;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.*;
import javax.servlet.http.*;
public class signin extends HttpServlet{ 
  @Override
  public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException
  {
        res.setContentType("text/html");
        String name =req.getParameter("username");
        String pass =req.getParameter("password");
        PrintWriter pw=res.getWriter();
        if(name.equals("priya") && pass.equals("priya123"))
        {
            RequestDispatcher rd=req.getRequestDispatcher("validpage");
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