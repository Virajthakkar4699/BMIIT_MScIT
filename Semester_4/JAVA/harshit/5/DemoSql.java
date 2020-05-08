import java.sql.*;
import java.util.*;

class DemoSql
{

	public static void main(String Args[])
	{
		Scanner sc=new Scanner(System.in);

		try
		{
			Class.forName("com.mysql.jdbc.Driver");

			Connection con=DriverManager.getConnection("jdbc:mysql://localhost/mysql","root","");
			System.out.println("Connection Established");

			System.out.println("Enter Name : ");
			String name=sc.nextLine();

			System.out.println("Enter Id : ");
			int Id=sc.nextInt();

			Statement st=con.createStatement();
			String iq="insert into Table1 values('"+Id"','"+name"')";

			int k=st.executeUpdate(iq);

			if(k==1)		
			{
				System.out.println("Inserted");
			}
			else
			{
				System.out.println("Not Inserted");
			}

			con.close();

		

		}
		catch(Exception e)
		{
			System.out.println("Error : "+e);

		}
		
	}
}