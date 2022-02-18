package com.spring.Spring_JDBC_MVC_demo.Controller;

public class Student {
	int Id;
	String name;
	
	public Student() {
		super();
	}
	public Student(int id, String name) {
		super();
		Id = id;
		this.name = name;
	}
	public int getId() {
		return Id;
	}
	public void setId(int id) {
		Id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	@Override
	public String toString() {
		return "Student [Id=" + Id + ", name=" + name + "]";
	}

}
