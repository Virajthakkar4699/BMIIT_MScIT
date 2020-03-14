import java.sql.*;
import java.util.*;

/*class Userexception extends Exception
{
	void Userexception()
	{
		//super();
	}
}
class Checklab
{
	void checklabplace(String s) throws Userexception
	{
		String s1=s;
		if !(s1=="cl-01" && s1=="cl-02" )
		{
			//throw Userexception("Invalid lab");
		}
	}
}*/
class lab
{	static Scanner sc=new Scanner(System.in);

	static void insertdata()
	{
		try
		{	
			
			Class.forName("com.mysql.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dbviraj","root","root");
			System.out.println("Connection done");
			System.out.println();
			System.out.println();
			
			//inputting values
			int rid;
			String labduration,lab,class_div,lab_day,subject,pr_faculty_1,pr_faculty_2,pr_faculty_3;
			
			System.out.println("Enter Rid:");
			rid=sc.nextInt();

			sc.nextLine();
			System.out.println("Enter Lab Duration:");
			labduration=sc.nextLine();
			
			System.out.println("Enter Lab Place:");
			lab=sc.nextLine();
			
			System.out.println("Enter Class and Division:");
			class_div=sc.nextLine();
			
			System.out.println("Enter Lab Day:");
			lab_day=sc.nextLine();
			
			System.out.println("Enter Subject:");
			subject=sc.nextLine();
			
			System.out.println("Enter Faculty 1:");
			pr_faculty_1=sc.nextLine();
			
			System.out.println("Enter Faculty 2:");
			pr_faculty_2=sc.nextLine();
			
			System.out.println("Enter Faculty 3:");
			pr_faculty_3=sc.nextLine();

			String faculty=pr_faculty_1+" : "+pr_faculty_2+" : "+pr_faculty_3;
			//System.out.println(faculty);
			
			//System.out.println("Enter date");
			//String date="2020-03-13";
			//date=sc.nextLIne();
			
			Statement stmt=con.createStatement();
			String sqlquery=("insert into tbl_lab_register values("+rid+",'"+labduration+"','"+lab+"','"+class_div+"','"+lab_day+"','"+subject+"','"+faculty+"',now());");
			
			int k=stmt.executeUpdate(sqlquery);
			System.out.println(": Record Inserted");
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	}
	
	static void viewdatadaywise()
	{
		try
		{
			//Day-Wise
			Class.forName("com.mysql.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/dbviraj","root","root");
			System.out.println();
			
			System.out.println("Data Day Wise:");
			System.out.println("==========================");
			
			System.out.println("Enter Lab Day:");
			String lab_day;
			lab_day=sc.nextLine();
			
			Statement stmt=con.createStatement();
			String sqlquery=("Select * from tbl_lab_register where lab_day='"+lab_day+"';");
			ResultSet rs=stmt.executeQuery(sqlquery);
			
			
			while(rs.next())
			{
System.out.println(rs.getInt(1)+"|"+rs.getString(2)+"|"+rs.getString(3)+"|"+rs.getString(4)+"|"+rs.getString(5)+"|"+rs.getString(6)+"|"+rs.getString(7)+"|"+rs.getString(8));
			}
			
			System.out.println("==========================");
			System.out.println();
			System.out.println();
			//Lab-Wise
			System.out.println("Data Lab Wise:");
			System.out.println("==========================");
			
			System.out.println("Enter Lab :");
			String lab;
			lab=sc.nextLine();
			
			Statement stmt1=con.createStatement();
			String sqlquery1=("Select * from tbl_lab_register where lab='"+lab+"';");
			ResultSet rs1=stmt1.executeQuery(sqlquery1);
			
			while(rs1.next())
			{
System.out.println(rs1.getInt(1)+"|"+rs1.getString(2)+"|"+rs1.getString(3)+"|"+rs1.getString(4)+"|"+rs1.getString(5)+"|"+rs1.getString(6)+"|"+rs1.getString(7)+"|"+rs1.getString(8));
			}
			
			System.out.println("==========================");	
		}
		catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	}
	
	public static void main(String args[])
	{	
		System.out.println("Lab information System");
		insertdata();
		viewdatadaywise();
		
			
	}
}












