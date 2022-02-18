package com.spring.Spring_JDBC_MVC_demo.Controller;

import java.util.List;

public interface Student_DAO {
	public int stud_insert(Student s);
	public int stud_update(Student s);
	public int stud_delete(Student s);
	public Student getStud(int studentid);
	public List<Student> displayAll();
}
