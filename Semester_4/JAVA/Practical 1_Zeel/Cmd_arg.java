class Cmd_arg
{
	public static void main(String[] args)
	{
		int paisa;
		float con;
		con=Float.parseFloat(args[0]);
		paisa=(int)con*100;
		System.out.println(paisa);
	}
}
