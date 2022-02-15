package ciepracticewebapp.controller;

import javax.servlet.http.HttpServletRequest;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

@Controller
public class HomeController {
	
	@RequestMapping("/home")
	public String home(Model model)	
	{	
		model.addAttribute("name", "Viraj");
		System.out.println("This is home URL");
		return "index";
	}
	
	@RequestMapping("/contact")
	public String contact()
	{
		return "contact";
	}
	
	@RequestMapping(path = "/processform", method = RequestMethod.POST)
	public String processform(HttpServletRequest request, Model m)
	{
		String email = request.getParameter("emailbox");
		String pass = request.getParameter("passwordbox");
		
		System.out.println(email);
		System.out.println(pass);
		
		m.addAttribute("email", email);
		m.addAttribute("pass", pass);
		
		return "success";
	}

}
