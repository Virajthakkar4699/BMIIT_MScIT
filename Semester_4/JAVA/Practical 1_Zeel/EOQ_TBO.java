import java.util.*;
class EOQ_TBO
{
	public static void main(String[] args)
	{
		int dr,sc,hc;
		double EOQ,TBO;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter demand rate:");
		dr=s.nextInt();
		System.out.print("Enter setup cost:");
		sc=s.nextInt();
		System.out.print("Enter holding cost:");
		hc=s.nextInt();
		EOQ=((2+dr*sc)/hc)/2;
		TBO=((2*sc)/(dr*hc))/2;
		System.out.println("Economic order quantity="+EOQ);
		System.out.println("Time between orders="+TBO);
	}
}
