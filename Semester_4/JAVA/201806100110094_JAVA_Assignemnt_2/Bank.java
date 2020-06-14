import java.util.*;
import java.sql.*;
import java.io.*;

class Bank
{
	
	public static void main(String args[])
	{
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/bank","root","root");
			PreparedStatement pst;
			ResultSet rs;
			Scanner sc=new Scanner(System.in);
			int ch=-1;
			while(ch!=0)
			{
				System.out.println("Press 1 To Register Employee");
				System.out.println("Press 2 To Open Customer Account");
				System.out.println("Press 3 To Deposit Amount");
				System.out.println("Press 4 To Withdraw Amount");
				System.out.println("Press 0 To Exit");
				System.out.println();
				System.out.print("Choose Your Option:");
				ch=sc.nextInt();
				if(ch==0)
					break;
				switch(ch)
				{
					case 1:
						System.out.println("Enter Employee Credentials");
						System.out.print("	create Username:");
						sc.nextLine();
						String username=sc.nextLine();
						System.out.print("	Enter new Password:");
						String password=sc.nextLine();
						pst=con.prepareStatement("insert into Employee values (?,?)");
						pst.setString(1,username);
						pst.setString(2,password);
						pst.executeUpdate();
						System.out.println("Employee Registered Sucessfully\n");
						break;
					case 2:
						System.out.println("Enter Employee Credentials");
						System.out.print("	Enter Emp Username:");
						sc.nextLine();
						username=sc.nextLine();
						System.out.print("	Enter Emp Password:");
						password=sc.nextLine();
						pst=con.prepareStatement("select * from Employee");
						rs=pst.executeQuery();
						boolean valid=false;
						while(rs.next())
						{
							if(rs.getString(1).equals(username))
								if(rs.getString(2).equals(password))
									valid=true;
						}
						if(valid==true)
						{
							System.out.println("Enter Customer Details");
							System.out.print("	Enter Customer Name:");
							String cname=sc.nextLine();
							System.out.print("	Enter Aadhar Number:");
							long adhnumber=sc.nextLong();
							pst=con.prepareStatement("select Aadhar from account");
							rs=pst.executeQuery();
							boolean exist=false;
							while(rs.next())
							{
								if(rs.getLong(1)==adhnumber)
									exist=true;
							}
							if(exist!=true)
							{
							System.out.print("	Enter Address:");
							sc.nextLine();
							String add=sc.nextLine();
							System.out.print("	Enter Age:");
							int age=sc.nextInt();
							System.out.print("	Enter Gender:");
							sc.nextLine();
							String gen=sc.nextLine();
							System.out.print("	Enter Opening Balance(Minimum 1000):");
							int bal=sc.nextInt();
							pst=con.prepareStatement("select now()");
							rs=pst.executeQuery();
							rs.next();
							String date=rs.getString(1);
							date=date.substring(0,10);
							long accountnum=(long)(Math.random()*1000L);
							pst=con.prepareStatement("insert into account values (?,?,?,?,?,?,?,?)");
							pst.setLong(1,accountnum);
							pst.setString(2,cname);
							pst.setLong(3,adhnumber);
							pst.setString(4,add);
							pst.setInt(5,age);
							pst.setString(6,gen);
							pst.setInt(7,bal);
							pst.setString(8,date);
							pst.executeUpdate();
                            System.out.println("account Created Successfully\n");
                            System.out.println("===========================================");
                            System.out.println("Account Number of "+cname+" is "+accountnum+"");
                            System.out.println("===========================================");
							}
							else
								System.out.println("account Already Exist\n");
						}
						else
							System.out.println("Wrong Credentials\n");
						break;
					case 3:
						System.out.print("Enter account Number:");
						long accountnum=sc.nextLong();
						pst=con.prepareStatement("select Holder,Balance from account where Acc_num=?");
						pst.setLong(1,accountnum);
						rs=pst.executeQuery();
						int status=0;
						int bal=0;
						String holder=null;
						while(rs.next())
						{
							status++;
							holder=rs.getString(1);
							bal=rs.getInt(2);
						}
						if(status==1)
						{
							System.out.print("Enter Deposit Amount:");
							int deposit=sc.nextInt();
							bal=bal+deposit;
							pst=con.prepareStatement("update account set Balance=? where Acc_num=?");
							pst.setInt(1,bal);
							pst.setLong(2,accountnum);
							pst.executeUpdate();
							System.out.println("Amount Deposit Successfully Updated Balance is "+bal+"\n");
							pst=con.prepareStatement("select now()");
							rs=pst.executeQuery();
							rs.next();
							String date=rs.getString(1);
							date=date.substring(0,10);
							String day=date.substring(8,10);
							String month=date.substring(5,7);
							String year=date.substring(2,4);
							FileOutputStream fos=new FileOutputStream("Bank_"+(day+month+year)+".txt",true);
							String str=accountnum+"      "+holder+"      Deposit      "+deposit+"\n";
							byte[] b=str.getBytes();
							fos.write(b);
                            fos.close();
                            System.out.println("Transaction Recorded into the file");
                            System.out.println("");
						}
						else
							System.out.println("account Not Found\n");							
						break;
					case 4:
						System.out.print("Enter account Number:");
						accountnum=sc.nextLong();
						pst=con.prepareStatement("select Holder,balance from account where Acc_num=?");
						pst.setLong(1,accountnum);
						rs=pst.executeQuery();
						status=0;
						bal=0;
						holder=null;
						while(rs.next())
						{
							status++;
							holder=rs.getString(1);
							bal=rs.getInt(2);
						}
						if(status==1 && bal>1000)
						{
							System.out.print("Enter Withdraw Amount:");
							int withdraw=sc.nextInt();
							bal=bal-withdraw;
							pst=con.prepareStatement("update account set Balance=? where Acc_num=?");
							pst.setInt(1,bal);
							pst.setLong(2,accountnum);
							pst.executeUpdate();
							System.out.println("Amount Withdraw Successfully Updated Balance is "+bal+"\n");
							pst=con.prepareStatement("select now()");
							rs=pst.executeQuery();
							rs.next();
							String date=rs.getString(1);
							date=date.substring(0,10);
							String day=date.substring(8,10);
							String month=date.substring(5,7);
							String year=date.substring(2,4);
							FileOutputStream fos=new FileOutputStream("Bank_"+(day+month+year)+".txt",true);
							String str=accountnum+"      "+holder+"      Withdraw      "+withdraw+"\n";
							byte[] b=str.getBytes();
							fos.write(b);
                            fos.close();
                            System.out.println("Transaction Recorded into the file");
                            System.out.println("");
						}
						else if(bal<=1000)
							System.out.println("Minimum Balance 1000 Required For Withdraw\n");
						else
							System.out.println("account Not Found\n");
						break;
				}
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}