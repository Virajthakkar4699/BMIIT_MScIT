import java.util.*;
import java.sql.*;

class Prepare
{
	public static void main(String a[])
	 {
		try{
			Scanner u=new Scanner(System.in);
			Class.forName("com.mysql.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/mysql","root","root");
			while( true )
			 {
					System.out.println("press 1 for insert");
					System.out.println("press 2 for update");
					System.out.println("press 3 for delete");	
					System.out.println("press 4 for display");
					System.out.println("press 0 for exit");	
					System.out.println("enter your choice.:");				
					int ch=u.nextInt();
					if(ch==0)
					 {
						break;
				 	 }
					switch(ch)
					 {
						case 1:
				
							System.out.println("enter id.:");
							int id=u.nextInt();
							System.out.println("enter name.:");
							String name=u.next();
							System.out.println("enter email.:");
							String email=u.next();
							System.out.println("enter password.:");
							String pass=u.next();
							System.out.println("enter status.:");
							String st=u.next();
			
							PreparedStatement pst=con.prepareStatement("insert into teacher values(?,?,?,?,?)");
			
							pst.setInt(1,id);
							pst.setString(2,name);
							pst.setString(3,email);
							pst.setString(4,pass);
							pst.setString(5,st);
			
							int r=pst.executeUpdate();
							if(r==1)
								System.out.println("insertion done");
							else
								System.out.println("!!!!!insertion not done");
							break;
						case 2:
							System.out.println("enter id where you want to update.:");
							id=u.nextInt();
							System.out.println("enter new name.:");
							name=u.next();
							PreparedStatement pst1=con.prepareStatement("update teacher set tname=? where tid=?");
							pst1.setInt(2,id);
							pst1.setString(1,name);
							int k=pst1.executeUpdate();
							if(k==1)
								System.out.println("updation done");
							else
								System.out.println("!!!!!updation not done");
							break;
						case 3:
							System.out.println("enter id that record you want to delete.:");
							id=u.nextInt();
							PreparedStatement pst2=con.prepareStatement("delete from teacher where tid=?");
							pst2.setInt(1,id);
							int j=pst2.executeUpdate();
							if(j==1)
								System.out.println("deletion done");
							else
								System.out.println("!!!!!delenot done");
							break;
						case 4:
							PreparedStatement pst3=con.prepareStatement("select * from teacher");
							ResultSet rs=pst3.executeQuery();
							while(rs.next())
							 {
								int i=rs.getInt("tid");
								String nm=rs.getString("tname");
								String em=rs.getString("temail");
								System.out.println("teacher id.:"+i+"\n");
								System.out.println("teacher name.:"+nm+"\n");
								System.out.println("teacher id.:"+em+"\n");
							 }
							break;
						
					 }	
			 }
			con.close();
		   }
		catch(Exception e)
		 {
			System.out.println(e);
		 }
	 }
}
