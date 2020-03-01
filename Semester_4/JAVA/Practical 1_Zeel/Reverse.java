import java.util.*;
class Reverse
{
	public static void main(String[] args)
	{
		int n,rem=0,num=0;
		System.out.print("Enter Number:");
		Scanner s=new Scanner(System.in);
		n=s.nextInt();
		while(n>0)
		{
			rem=n%10;
			num=(num*10)+rem;
			n=n/10;
		}
		System.out.println(num);

	}
}
