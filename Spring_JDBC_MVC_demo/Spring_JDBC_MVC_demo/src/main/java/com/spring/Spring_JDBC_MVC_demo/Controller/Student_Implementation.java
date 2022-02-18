package com.spring.Spring_JDBC_MVC_demo.Controller;

import java.util.List;

import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.RowMapper;

import com.spring.Spring_JDBC_MVC_demo.Controller.Student;

public class Student_Implementation implements Student_DAO {
	
private JdbcTemplate jdbcTemplate;
	
	public JdbcTemplate getJdbcTemplate() {
		return jdbcTemplate;
	}
	
	public void setJdbcTemplate(JdbcTemplate jdbcTemplate) {
		this.jdbcTemplate = jdbcTemplate;
	}

	public int stud_insert(Student s) {
		int r=jdbcTemplate.update("insert into student(id,name) values(?,?)",s.getId(),s.getName());
		return r;		
	}

	public int stud_update(Student s) {
		int r=jdbcTemplate.update("update student set name=? where id=?",s.getName(),s.getId());
		return r;
	}

	public int stud_delete(Student s) {
		int r=jdbcTemplate.update("delete from student where id=?",s.getId());
		return r;
	}

	public Student getStud(int studentid) {
		String query="select * from student where id=?";
		RowMapper<Student> row=new RowMapper_display();
		Student stud=jdbcTemplate.queryForObject(query, row,studentid);
		return stud;
	}

	public List<Student> displayAll() {
		String query="select * from student";
		RowMapper<Student> r=new RowMapper_display();
		List<Student> s=jdbcTemplate.query(query, r);
		return s;
	}
}
