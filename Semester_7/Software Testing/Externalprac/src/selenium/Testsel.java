package selenium;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

public class Testsel {
	
	public static void main(String[] args)
	{
		//firefox
		//System.setProperty("webdriver.gecko.driver", "C:\\Users\\Admin\\Downloads\\geckodriver-v0.30.0-win64\\geckodriver.exe");
		//WebDriver driver = new FirefoxDriver(); 
		//driver.get("https://www.guru99.com/gecko-marionette-driver-selenium.html");
		
		//chrome
		
		System.setProperty("webdriver.chrome.driver", "C:\\Users\\Admin\\Downloads\\chromedriver_win32\\chromedriver.exe");
		WebDriver driver = new ChromeDriver();
		String title = driver.getTitle();
		String url=driver.getCurrentUrl();
		driver.getPageSource();
		
		//XPATH
		driver.findElement(By.xpath("")).sendKeys("ABC");
		
		//ID
		driver.findElement(By.id("")).sendKeys("ABC");
		
		//NAME
		driver.findElement(By.name("")).sendKeys("ABC");
		
		//LINKTEXT
		driver.findElement(By.linkText("")).click();
		
		//PARTIALLINKTEXT
		driver.findElement(By.partiallinktext("")).click();
		
		//CSSSELECTOR
		driver.findElement(By.cssSelector("")).click();
		
		//CLASS
		driver.findElement(By.className("")).click();
		
		//HandleDropbox
		Select select=new Select(driver.findElement(By.id(""))); //import from support.ui
		select.selectByVisibleText("ABC");
	}

}
