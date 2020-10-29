
import java.io.IOException;
import java.io.PrintWriter;
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
public class s3  extends HttpServlet 
    {
   
  @Override
  public void service(HttpServletRequest req,HttpServletResponse res) throws IOException, ServletException
    {
        
        PrintWriter pw=res.getWriter();
              String name=req.getParameter("name");
              res.setContentType("text/html");
              pw.print("<center>");
             pw.print("Hello "+name);
                   pw.print("</center>");
            
          
      
    
    
}
    
}