/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author Viraj
 */
public class searchengine extends HttpServlet {

    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            /* TODO output your page here. You may use following sample code. 
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet searchengine</title>");            
            out.println("</head>");
            out.println("<body>");
            out.println("<h1>Servlet searchengine at " + request.getContextPath() + "</h1>");
            out.println("</body>");
            out.println("</html>");
            */
            
            String Qry = request.getParameter("query");
            String Googlekey = request.getParameter("ggl");
            
            if (Qry.equals("movies") ||Qry.equals("online games") ||Qry.equals("online shopping")  ||Qry.equals("games")) 
            {

                            response.sendError(response.SC_BAD_REQUEST,"RESTRICTED KEYWORD DETECTED IN INPUT");
            }
            else{

                            if("Google".equals(Googlekey))
                            {
                                response.sendRedirect("https://www.google.com/search?q="+Qry);
                            }
                            else
                            {
                                response.sendRedirect("https://www.bing.com/search?q="+Qry);
                            }

                }
        }
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
