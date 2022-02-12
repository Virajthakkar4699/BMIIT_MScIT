package com.spring.core;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        ////////////////////
        
        ApplicationContext context=new ClassPathXmlApplicationContext("com/spring/core/config.xml");
        Student s=(Student)context.getBean("stud");
        System.out.println(s);
        
        employeee e=(employeee)context.getBean("emp");
        System.out.println(e.test1());
    }
}
