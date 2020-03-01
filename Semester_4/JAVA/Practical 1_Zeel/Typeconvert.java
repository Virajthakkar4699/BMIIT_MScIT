class Typeconvert
{
	public static void main(String[] args)
	{
		int b;
		double c;
		b=260;
		c=323.142;
		byte bcon;
		byte bcon2;
		int icon;
		bcon=(byte)b;
		icon=(int)c;
		bcon2=(byte)c;
		System.out.println("Int:"+b+"\tDouble:"+c);
		System.out.println("int into byte:"+bcon);
		System.out.println("double into int:"+icon);
		System.out.println("double into byte:"+bcon2);
		
	}
}
