package exam.Controller;

import java.util.List;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;

import exam.Model.Customer;
import exam.Model.CustomerDAO;

@Controller
public class HomeController {
	
	ClassPathXmlApplicationContext conn;

	@RequestMapping("/home")
	public String home()
	{
		return("register");
	}
	
	@RequestMapping("/login")
	public String login()
	{
		return("login");
	}
	
	@RequestMapping("/store")
	public String store(@ModelAttribute("bean") Customer c,Model m)
	{
	conn = new ClassPathXmlApplicationContext("ApplicationContext.xml");
	CustomerDAO obj =(CustomerDAO)conn.getBean("dao");
	obj.save(c);
	m.addAttribute("msg","Record insert successfully....");
	System.out.println("Inserted");
	return "register";
	}
	
	@RequestMapping("/check")
	public String check(@ModelAttribute("bean") Customer c,Model m,HttpServletRequest request)
	{
	conn = new ClassPathXmlApplicationContext("ApplicationContext.xml");
	CustomerDAO obj =(CustomerDAO)conn.getBean("dao");
	List list = obj.login(c);
	if(!list.isEmpty())
	{
	m.addAttribute("msg","welcome"+c.getEmail());
	//c.setFlag(1);
	HttpSession session = request.getSession();
	session.setAttribute("logindata", c);
	System.out.println("Loggedin");
	return "success";
	}
	else {
	m.addAttribute("msg","Incorrect username and password");
	System.out.println("ERROR");
	return "login";
	}
	}
	
}
