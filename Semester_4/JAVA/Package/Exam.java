package StudentDetail;
import java.util.*;

public class Exam extends Student
{
	public String ExamType;
	public String ExamTime;
	public String ExamDate;

	Scanner sc=new Scanner(System.in);

	public void Exam_Input()
	{
		System.out.println("Enter Exam Type : ");
		ExamType=sc.nextLine();
		System.out.println("Enter Exam Date : ");
		ExamDate=sc.nextLine();
		System.out.println("Enter Exam Time : ");
		ExamTime=sc.nextLine();
		
	}
	
	public void Exam_Display()
	{
		System.out.println("Exam Type : "+ExamType);
		System.out.println("Exam Date : "+ExamDate);
		System.out.println("Exam Time : "+ExamTime);
	}
}
