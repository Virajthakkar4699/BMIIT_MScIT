import java.util.*;
class Array_sumrowcol
{
	public static void main(String[] args)
	{
		int[][] a;
		int rows,cols;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter Rows:");
		rows=s.nextInt();
		System.out.print("Enter Cols:");
		cols=s.nextInt();
		int[] sumrow=new int[rows];
		int[] sumcol=new int[cols];
		a=new int[rows][cols];
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				System.out.print("Enter value at "+(i+1)+","+(j+1)+":");
				a[i][j]=s.nextInt();
			}
		}
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				System.out.print(" "+a[i][j]);
			}
			System.out.println();
		}
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				sumrow[i]=sumrow[i]+a[i][j];
				sumcol[j]=sumcol[j]+a[i][j];
			}
		}
		for(int i=0;i<rows;i++)
		{
			System.out.println("Sum of row "+(i+1)+"="+sumrow[i]);
		}
		for(int i=0;i<cols;i++)
		{
			System.out.println("Sum of cols "+(i+1)+"="+sumcol[i]);
		}		
	}
}
