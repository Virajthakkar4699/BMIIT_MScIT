import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;

@WebServlet(urlPatterns = {"/DemoServlet"})
public class DemoServlet implements Servlet 
{
    ServletConfig config=null;
    @Override
    public void init(ServletConfig config) {
        this.config=config;
    }
    @Override
    public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
        res.setContentType("text/html");
       PrintWriter pwriter=res.getWriter();
       pwriter.print("<html>");
       pwriter.print("<body>");
       pwriter.print("<h1>Servlet Example Program</h1>");
       pwriter.print("<b>Servlet</b>");
       pwriter.print("</body>");
       pwriter.print("</html>");
    }
    @Override
    public void destroy() {
        System.out.println("servlet life cycle finished");
    }
    @Override
    public String getServletInfo() {
        return "A servlet life cycle program";
    }
    @Override
    public ServletConfig getServletConfig() {
        return config;
    }
}