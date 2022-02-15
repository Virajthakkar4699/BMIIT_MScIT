package com.spring.core.collections;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.spring.core.Student;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		System.out.println( "Hello World!" );
        ApplicationContext context= new ClassPathXmlApplicationContext("com/spring/core/collections/collectionconfig.xml");
        com.spring.core.collections.Student stud=(com.spring.core.collections.Student)context.getBean("studcollection");
        System.out.println(stud);
        
        System.out.println(stud.getName());
        System.out.println(stud.getAddress());
        System.out.println(stud.getCourses());
        System.out.println(stud.getPhones());

	}

}
