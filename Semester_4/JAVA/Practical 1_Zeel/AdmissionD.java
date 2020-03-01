import java.util.*;
class Admission
{
	public static void main(String[] args)
	{
		int maths,phy,che,total=0,tmp=0;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter mathematics marks:");
		maths=s.nextInt();
		System.out.print("Enter physics marks:");
		phy=s.nextInt();
		System.out.print("Enter chemistry marks:");
		che=s.nextInt();
		total=maths+phy+che;
		tmp=maths+phy;
		System.out.println("Total="+total);
		System.out.println("Total Maths Physics="+tmp);	
		System.out.println("-----------------------------------------");
		if(maths>=60 && phy>=50 && che>=40)
		{
			if(total>=200)
				System.out.println("You are eligible for admission");
			else
				System.out.println("You are not eligible for admission");
		}
		else
		{
			if(tmp>=150)
				System.out.println("You are eligible for admission");
			else
				System.out.println("You are not eligible for admission");						
		}
	}
}
