package com.spring.core;

import java.sql.ResultSet;
import java.util.List;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.jdbc.core.JdbcTemplate;

import com.mysql.cj.xdevapi.Statement;

public class App 
{
    public static void main( String[] args )
    {
    	ApplicationContext context = new ClassPathXmlApplicationContext("com/spring/core/config.xml");
    	JdbcTemplate template = context.getBean("jdbc",JdbcTemplate.class);
    	
    	//inset query
    	
//    	String query2 = "update demo set name=? where id=?";
//    	int result = template.update(query2,"chodu chi",2);
  	
//    	String query3 = "delete from demo where id = ?";
//    	int result = template.update(query3,2);
    	 
	    Student s= new Student();
	    s.setalldata();

    	String query = "insert into demo (id,name,ad) values (?,?,?)";
    	int result = template.update(query,s.getId(),s.getName(),s.getAd());

    	String selectQuery = "select * from demo";
    	List <Student> students = template.query(selectQuery, new StudentMapper());
    	for (Student record : students) {
            System.out.print("ID : " + record.getId() );
            System.out.print(", Name : " + record.getName() );
            System.out.println(", Age : " + record.getAd());
         }  
	  
    
    }
}
