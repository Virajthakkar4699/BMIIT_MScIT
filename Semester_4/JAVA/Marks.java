import java.util.*;
class Marks
{
	public static void main(String args[])
	{
		System.out.println("Assesment Report");
		
		Scanner sc= new Scanner(System.in);
		
		int sub1;
		System.out.println("Enter Marks of Subject-1 out of 100: ");
		sub1=sc.nextInt();
		
		int sub2;
		System.out.println("Enter Marks of Subject-2 out of 100: ");
		sub2=sc.nextInt();
		
		int total = sub1+sub2;
		System.out.println("TOtal marks are : " + total);
		
		int average;
		average = total/2;
		System.out.println("Average : "+average);
		
		if(sub1<sub2)
		{
			System.out.println("Subject 1 marks are minimum");
		}
		else if(sub1=sub2)
		{
			System.out.println("Both are equal");
		}
		else
		{
			System.out.println("Subject 2 marks are least");
		}
	}
}
