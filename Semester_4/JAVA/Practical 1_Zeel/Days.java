import java.util.Scanner;
class Days
{
	public static void main(String[] args)
	{
		int days,month=0,year=0;
		System.out.print("Enter no. of days:");
		Scanner s=new Scanner(System.in);
		days=s.nextInt();
		if(days>=30 && days<365)
		{
			for(;days>=30;)
			{
			month++;
			days=days-30;
			}
		}
		if(days>=365)
		{
			for(;days>=365;)
			{
			year++;
			days=days-365;
			}
		}
		System.out.print(year+"year\t");
		System.out.print(month+"month\t");
		System.out.print(days+"days");
	}
}
