import java.util.Scanner;
class SubjectSum
{
	public static void main(String[] args)
	{
		int subject_mark1,subject_mark2;
		int average;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter Marks Of Subject 1:");
		subject_mark1=s.nextInt();
		System.out.print("Enter Marks Of Subject 2:");
		subject_mark2=s.nextInt();
		average=(subject_mark1+subject_mark2)/2;
		System.out.println("\nAverage="+average);
		if(subject_mark1>subject_mark2)
			System.out.println("Minimum Mark Subject 2="+subject_mark2);
		else
			System.out.println("Minimum Mark Subject 1="+subject_mark1);
	}
}
