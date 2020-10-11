/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 *
 * @author Viraj
 */
public class RedirectSqServlet extends HttpServlet {

    /**
     * Processes requests for both HTTP <code>GET</code> and <code>POST</code>
     * methods.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
//        response.setContentType("text/html;charset=UTF-8");
//        try (PrintWriter out = response.getWriter()) {
//            /* TODO output your page here. You may use following sample code. */
//            out.println("<!DOCTYPE html>");
//            out.println("<html>");
//            out.println("<head>");
//            out.println("<title>Servlet RedirectSqServlet</title>");            
//            out.println("</head>");
//            out.println("<body>");
//            out.println("<h1>Servlet RedirectSqServlet at " + request.getContextPath() + "</h1>");
//            out.println("</body>");
//            out.println("</html>");
//        }
            
              //Called using SEND REDIRECT
              HttpSession session= request.getSession();
              
              //session.removeAttribute("name");
             // String name=(String) session.getAttribute("name");
             //Cookie and session cannot be used together
              
              Cookie arrcookies[] = request.getCookies();
              
              String cookieval="";
              for(Cookie c: arrcookies)
              {
                   if(c.getName().equals("lname"));
                   cookieval=(String)c.getValue();
              }
              
              PrintWriter out=response.getWriter();
              out.print("Hello Send Redirected Here (URL Rewriting)<br>");
              int k= Integer.parseInt(request.getParameter("k"));
              k=k*k;
              out.print(k);
              out.print("<br>");
              //out.print("Session Name : "+name);
              out.print(" ");
              out.print("Cookie Value : "+cookieval);
              
              out.print("<br>");
              
              ServletContext ctx= getServletContext();
              String phone=ctx.getInitParameter("Phone");
              out.print("Servlet Context Phone : "+phone);
              
              out.print("<br>");
              
              ServletConfig cfg= getServletConfig();
              String svconfig=cfg.getInitParameter("servconfig");
              out.print("Servlet Config Value : "+svconfig);
              
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
