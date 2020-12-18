package General;
import java.util.*;
public class Person
{
	public String Name;
	public String Address;
	public String ContactNumber;
	
	Scanner sc = new Scanner(System.in);	

	public void input()
	{
		System.out.println("Enter Person Name : ");
		Name=sc.nextLine();
		System.out.println("Enter Address : ");
		Address=sc.nextLine();
		System.out.println("Enter ContactNumber : ");
		ContactNumber=sc.nextLine();

	}
	
	public void display()
	{
		System.out.println("Name : "+Name);
		System.out.println("Address : "+Address);
		System.out.println("Contact Number : "+ContactNumber);

	}	
}
