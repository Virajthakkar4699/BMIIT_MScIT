import java.sql.*;
import java.util.*;
import java.io.*;

class Sql1
{

	public static void main(String Args[])
	{
		Scanner sc=new Scanner(System.in);

		try
		{
			Class.forName("com.mysql.jdbc.Driver");

			Connection con=DriverManager.getConnection("jdbc:mysql://localhost/mysql","root","root");
			System.out.println("Connection Established");

			/*System.out.println("Enter Name : ");
			String name=sc.nextLine();

			System.out.println("Enter Id : ");
			int Id=sc.nextInt();

			Statement st=con.createStatement();
			String iq="insert into Table1 values('"+Id+"','"+name+"')";

			int k=st.executeUpdate(iq);

			if(k==1)		
			{
				System.out.println("Inserted");
			}
			else
			{
				System.out.println("Not Inserted");
			}

			con.close();*/

			CallableStatement cst=con.prepareCall("{call p_call3(?)}");
			cst.setInt(1,18);
			cst.execute();
			
			ResultSet rs=cst.getResultSet();
			
			File f=new File("Data2.txt");
			FileWriter F=new FileWriter(f);

			while(rs.next())
			{
				
				System.out.println(rs.getInt(1)+"|"+rs.getString(2));
				
				F.append(rs.getInt(1)+"|"+rs.getString(2));
				System.out.println();
				
				
				
				
			}
			F.close();
			con.close();

		}
		catch(Exception e)
		{
			System.out.println("Error : "+e);

		}
		
	}
}