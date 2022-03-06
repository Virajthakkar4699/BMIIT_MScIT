package com.spring.Spring_JDBC_MVC_demo.Controller;

import java.util.List;

import org.apache.tomcat.util.log.UserDataHelper.Mode;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;

import com.spring.Spring_JDBC_MVC_demo.Controller.Student;

@Controller
public class HomeController {
	ApplicationContext context = new ClassPathXmlApplicationContext("/com/spring/Spring_JDBC_MVC_demo/Controller/config.xml");
	Student_Implementation i=(Student_Implementation) context.getBean("dao");
	
	@RequestMapping("/register")
	public String registerStud()
	{
		return "registerStud";
	}
	
	@RequestMapping(path="/addstud",method = RequestMethod.POST)
	public String addstudent(@RequestParam("id") String id,@RequestParam("name") String name,Model model)
	{	
		Student s=new Student();
		s.setId(Integer.parseInt(id));
		s.setName(name);
		int r=i.stud_insert(s);
		System.out.println(r);
	
        model.addAttribute("newstud",s);
		
		return "registerStud";
	}
	
	@RequestMapping(path="/addstud",params = "view", method=RequestMethod.POST )
	public String viewstudent(Model model)
	{
		Student s=new Student();
		List<Student> slist= i.displayAll();
        for(Student stud: slist) {
           System.out.println(stud);
        }
        model.addAttribute("studentlist",slist);
		
		return "registerStud";
	}

}
