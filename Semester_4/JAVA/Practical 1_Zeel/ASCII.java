import java.util.Scanner;
class ASCII
{
	public static void main(String[] args)
	{
		int intasciiNumber,diff;
		char convert=65;
		System.out.print("Enter ASCII No:");
		Scanner s=new Scanner(System.in);
		intasciiNumber=s.nextInt();
		convert=(char)intasciiNumber;
		System.out.println(convert);
	}
}
