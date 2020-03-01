import java.util.*;
class Pattern
{
	public static void main(String[] args)
	{
		int n;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter Number:");
		n=s.nextInt();
		for(int i=0;i<n;i++)
		{
			for(int j=n;j>i;j--)
			{
				System.out.print("$ ");
			}
			System.out.print("\n");
		}
		System.out.print("\n");
		for(int i=n;i>=0;i--)
		{
			for(int j=i;j<n;j++)
			{
				if(j%2==0)
					System.out.print("1 ");
				else
					System.out.print("0 ");
			}
			System.out.print("\n");
		}
		System.out.print("\n");
		for(int i=0;i<n;i++)
		{
			for(int j=n;j>=0;j--)
			{
				if(i>=j)
				{
					System.out.print(i+1+" ");
				}
				else
					System.out.print("  ");
			}
			System.out.print("\n");
		}
		
	}
}
