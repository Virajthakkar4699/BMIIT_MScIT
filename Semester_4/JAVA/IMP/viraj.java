import java.sql.* ;
class viraj
{
	public static void main(String Args[])
	{
		try
		{
	Class.forName("com.mysql.cj.jdbc.Driver");

			Connection con=DriverManager.getConnection("jdbc:mysql://localhost/pratik","root","root");
			System.out.println("Connection Established");

		}
	catch(Exception e)
	{
		System.out.println("Connection error"+" "+e.getMessage());
	}
	}
}