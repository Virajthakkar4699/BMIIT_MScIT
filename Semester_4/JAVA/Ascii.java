import java.util.*;
class Ascii
{
	public static void main(String[] args)
	{
		System.out.println("ASCII Values");
		
		Scanner sc= new Scanner(System.in);
		
		int intascii;
		System.out.println("Enter Integer of ASCII Value :");
		intascii=sc.nextInt();
		
		
		for (char alpha='a';alpha<='z';alpha++)
			System.out.println(alpha);
		
		
	}
}
