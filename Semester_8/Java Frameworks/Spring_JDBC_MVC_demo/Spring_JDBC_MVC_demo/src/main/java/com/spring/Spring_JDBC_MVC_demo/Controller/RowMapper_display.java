package com.spring.Spring_JDBC_MVC_demo.Controller;

import java.sql.ResultSet;
import java.sql.SQLException;

import org.springframework.jdbc.core.RowMapper;

public class RowMapper_display implements RowMapper<Student> {

	public Student mapRow(ResultSet rs, int rowNum) throws SQLException {
		Student s=new Student();
		s.setId(rs.getInt(1));
		s.setName(rs.getString(2));
		return s;
	}

}
