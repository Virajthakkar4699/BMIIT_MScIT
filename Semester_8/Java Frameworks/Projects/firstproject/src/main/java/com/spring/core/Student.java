package com.spring.core;

public class Student {
	
	private String studid;
	private String studname;
	private int rollno;
	
	public String getStudid() {
		return studid;
	}
	public void setStudid(String studid) {
		this.studid = studid;
	}
	public String getStudname() {
		return studname;
	}
	public void setStudname(String studname) {
		this.studname = studname;
	}
	public int getRollno() {
		return rollno;
	}
	public void setRollno(int rollno) {
		this.rollno = rollno;
	}
	public Student(String studid, String studname, int rollno) {
		super();
		this.studid = studid;
		this.studname = studname;
		this.rollno = rollno;
	}
	public Student() {
		super();
		// TODO Auto-generated constructor stub
	}
	@Override
	public String toString() {
		return "Student [studid=" + studid + ", studname=" + studname + ", rollno=" + rollno + "]";
	}
	
	
	
	
	
	

}
