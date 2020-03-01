import java.util.*;
class Array_sort
{
	public static void main(String[] args)
	{
		int[] n;
		int size,container;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter size of an array:");
		size=s.nextInt();
		n=new int[size];
		System.out.println(" ");
		for(int i=0;i<n.length;i++)
		{
			System.out.print("Enter value at array "+(i+1)+" :");
			n[i]=s.nextInt();
		}
		for(int i=0;i<n.length;i++)
		{
			for(int j=i+1;j<n.length;j++)
			{
				if(n[i]>n[j])
				{
					container=n[i];
					n[i]=n[j];
					n[j]=container;
				}
			}
		}
		System.out.println("Increasing Order");
		for(int i=0;i<n.length;i++)
		{
			System.out.println("Value at array "+(i+1)+"="+n[i]);
		}
		
		for(int i=0;i<n.length;i++)
		{
			for(int j=i+1;j<n.length;j++)
			{
				if(n[i]<n[j])
				{
					container=n[i];
					n[i]=n[j];
					n[j]=container;
				}
			}
		}
		System.out.println("Decreasaing Order");
		for(int i=0;i<n.length;i++)
		{
			System.out.println("Value at array "+(i+1)+"="+n[i]);
		}
	}
}
