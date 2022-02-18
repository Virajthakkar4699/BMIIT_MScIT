package chirag.controller;

import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;

import chirag.model.Student;
import chirag.model.StudentDAO;

@Controller
public class HomeController {
	
	private ClassPathXmlApplicationContext conn;
	
	@RequestMapping("/home")
	public String home()
	{
		return "index";
	}
	
	@RequestMapping("/register")
	public String register()
	{
		return "register";
	}
	
	@RequestMapping("/store")
	public String store(@ModelAttribute("bean")Student s,Model m)
	{
		conn = new ClassPathXmlApplicationContext("kaibi.xml");
		StudentDAO obj=(StudentDAO)conn.getBean("dao");
		obj.save(s);
		m.addAttribute("msg", "User Registered");
		return "register";
	}
}
