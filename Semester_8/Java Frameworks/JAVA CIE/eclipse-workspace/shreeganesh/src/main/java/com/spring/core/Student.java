package com.spring.core;

import java.util.Scanner;

public class Student {
	
	private int id;
	private String name;
	private String ad;
	Scanner input = new Scanner(System.in);

	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getAd() {
		return ad;
	}
	public void setAd(String ad) {
		this.ad = ad;
	}
	
	public Student(int id, String name, String ad) {
		super();
		this.id = id;
		this.name = name;
		this.ad = ad;
	}
	
	public Student() {
	
	}
	
	public void setalldata() {
		System.out.print("Enter id - ");
		setId(input.nextInt());
		input.nextLine();
		System.out.print("Enter name - ");
		setName(input.nextLine());
		System.out.print("Enter Address - ");
		setAd(input.nextLine());
	}
	
	
	@Override
	public String toString() {
		return "Student [id=" + id + ", name=" + name + ", ad=" + ad + "]";
	}	
}
