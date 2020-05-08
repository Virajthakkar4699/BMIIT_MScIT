package StudentDetail;
import General.Person;
import java.util.*;

public class Student extends Person
{
	public String Semester;
	public String Course;
	
	Scanner sc=new Scanner(System.in);
	
	public void Stud_Input()
	{
		System.out.println("Enter Semester : ");
		Semester=sc.nextLine();
		System.out.println("Enter Course : ");
		Course=sc.nextLine();
				
	}
	
	public void Stud_Display()
	{
		//System.out.println("Semester : ",+Semester);
		//System.out.println("Course : ",+Course);
			
	}
}


