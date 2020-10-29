import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.*;

public class servlet1 extends HttpServlet
{
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException 
    {
        resp.setContentType("text/html");
        PrintWriter pw=resp.getWriter();
        //String n=req.getParameter("username");
        String n="viraj";
        pw.println("<b>Hello..! </b>"+n + "<br> Welcome to my website <br>");
        pw.print("<form action='servlet2'>");  
        pw.print("<input type='hidden' name='uname' value='"+n+"'>");  
        pw.print("<input type='submit' value='Go to 2 servlet'>");  
        pw.print("</form>");
    }
}