package furnishpackage;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

@Controller
public class HomeController {
	
	@RequestMapping("/home")
	public String Home(Model m)
	{
		//List<Mattress> mattresses=mdao.getMattress();
		//m.addAttribute("mattresses",mattresses);
		//return "Home";
		return("addmattressform");
	}
	
//	@RequestMapping("/add")
//	public String Add(Model m)
//	{
//		//m.addAttribute("")
//		
//		return("Addnewmatt");
//	}
//	
//	@RequestMapping(value = "/add-matt",method = RequestMethod.POST)
//	public String abc()
//	{
//		return("abc");
//	}

}
