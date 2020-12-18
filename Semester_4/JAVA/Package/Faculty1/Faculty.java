package Faculty1;
import java.util.*;
import General.Person;

public class Faculty extends Person
{	
	public String Designation;
	public String Course;
	
	Scanner sc=new Scanner(System.in);
	
	public void Faculty_Input()
	{
		System.out.println("Enter Designation of Faculty : ");
		Designation=sc.nextLine();
		System.out.println("Enter Course of the Faculty : ");
		Course=sc.nextLine();
		
	}

	public void Faculty_Display()
	{
		//System.out.println("Designation : ",+Designation);
		//System.out.println("Course : ",+Course);
		
	}
}
