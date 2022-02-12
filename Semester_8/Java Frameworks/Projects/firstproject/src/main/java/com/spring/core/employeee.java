package com.spring.core;

import org.aspectj.lang.annotation.Aspect;
import org.aspectj.lang.annotation.Before;

@Aspect

public class employeee {
	
	
	public String test1()
	{
		
		//System.out.println("Chirag sfgjshgfjhsfghj");
		return "Chirag";
		
	}
	
	@Before("execution(* com.spring.core.employeee.test1())")
	public void test2()
	{
		System.out.println("Chutiya");
	}

}
