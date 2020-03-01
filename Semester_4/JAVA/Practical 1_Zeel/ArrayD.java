import java.util.*;
class Array
{
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		int[] a;
		int size;
		System.out.print("Enter size of array:");
		size=s.nextInt();
		a=new int[size];
		for(int i=0;i<a.length;i++)
		{
			System.out.print("Enter value at "+(i+1)+" :");
			a[i]=s.nextInt();
		}
		for(;;)
		{
			int ch;
			System.out.println("Press 1 Total number of even integers");
			System.out.println("Press 2 Total number of odd integers");
			System.out.println("Press 3 Sum of all even integers");
			System.out.println("Press 4 Sum of all odd integers");
			System.out.println("Press 0 Exit");
			System.out.print("\nEnter Choice:");
			
			ch=s.nextInt();
			if(ch==0)
				break;
			switch(ch)
			{
			case 1:
				int teven=0;
				for(int i=0;i<a.length;i++)
				{
					if(a[i]%2==0)
						teven++;
				}
				System.out.println("---------------------");
				System.out.println("Total even integers="+teven);
				System.out.println("");	
				break;
			case 2:
				int todd=0;
				for(int i=0;i<a.length;i++)
				{
					if(a[i]%2!=0)
						todd++;
				}
				System.out.println("---------------------");
				System.out.println("Total odd integers="+todd);
				System.out.println("");
				break;
			case 3:
				int seven=0;
				for(int i=0;i<a.length;i++)
				{
					if(a[i]%2==0)
						seven=seven+a[i];
				}
				System.out.println("---------------------");
				System.out.println("Total sum of even integers="+seven);
				System.out.println("");	
				break;
			case 4:
				int sodd=0;
				for(int i=0;i<a.length;i++)
				{
					if(a[i]%2!=0)
						sodd=sodd+a[i];
				}
				System.out.println("---------------------");
				System.out.println("Total sum of odd integers="+sodd);
				System.out.println("");
				break;
			default:
				System.out.println("Invalid Choice");
			}
		}
	}
}
