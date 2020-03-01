import java.util.*;
class Distance
{
	public static void main(String[] args)
	{
		double u,a,distance;
		int time;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter acceleration:");
		a=s.nextDouble();
		System.out.print("Enter initial velocity:");
		u=s.nextDouble();
		System.out.print("Enter time:");
		time=s.nextInt();
		distance=(u+time)+(a*(time*time))/2;
		System.out.println("Distance="+distance);
	}
}
