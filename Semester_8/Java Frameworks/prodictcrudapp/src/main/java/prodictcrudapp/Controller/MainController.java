package prodictcrudapp.Controller;

import java.util.List;

import javax.print.DocFlavor.STRING;
import javax.servlet.http.HttpServletRequest;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.servlet.view.RedirectView;

import prodictcrudapp.Dao.ProductDao;
import prodictcrudapp.model.Product;

@Controller
public class MainController {
	
	@Autowired
	private ProductDao productDao;

	@RequestMapping("/")
	public String home(Model m)
	{
		List<Product> products=productDao.getProducts();
		m.addAttribute("products", products);
		return "index";
	}
	
	@RequestMapping("/add-product")
	public String add_product(Model m)
	{
		m.addAttribute("title", "add product");
		return "add_product_form";
	}
	
	//Handle Add product form
	@RequestMapping( value = "/handle-product",method = RequestMethod.POST)
	public String handleProduct(@ModelAttribute Product product,HttpServletRequest req,Model m)
	{
		System.out.println(product);
		productDao.createProduct(product);
		List<Product> products=productDao.getProducts();
		m.addAttribute("products", products);
		return "index";
	}
	
	
	//delete handler
	@RequestMapping("/delete/{productId}")
	public RedirectView deleteProduct(@PathVariable("productId") int productId,HttpServletRequest req)
	{
	this.productDao.deleteProduct(productId);
	RedirectView redirectView = new RedirectView();
	redirectView.setUrl(req.getContextPath() + "/");
	return redirectView;
	}
	
	//update handler
	@RequestMapping("/update/{productId}")
	public String updateForm(@PathVariable("productId") int pid, Model model)
	{
		Product product=this.productDao.getProduct(pid);
		model.addAttribute("product", product);
		return "update_form";
	}
	
	
}
