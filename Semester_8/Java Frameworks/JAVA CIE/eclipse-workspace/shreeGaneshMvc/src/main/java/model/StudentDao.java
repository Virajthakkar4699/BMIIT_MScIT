package model;

import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import org.springframework.dao.DataAccessException;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.PreparedStatementCallback;
import org.springframework.jdbc.core.ResultSetExtractor;

public class StudentDao {
	private JdbcTemplate jdbc;

	public void setJdbc(JdbcTemplate jdbc) {
		this.jdbc = jdbc;
	}
	
	public Boolean save(final Student s) {
		String str = "insert into studentinfo values (?,?,?,?)";
		return jdbc.execute(str,new PreparedStatementCallback<Boolean>() {

			public Boolean doInPreparedStatement(PreparedStatement ps) throws SQLException, DataAccessException {
				ps.setInt(1, s.getRoll());
				ps.setString(2, s.getName());
				ps.setString(3, s.getMobile());
				ps.setString(4, s.getEmail());
				return ps.execute();
			}
			
		});
	}
	
	public List display()
	{
		final List list =new ArrayList();
		
		String str = "Select * from studentinfo";
		jdbc.query(str, new ResultSetExtractor<Student>() {

			public Student extractData(ResultSet rs) throws SQLException, DataAccessException {
				// TODO Auto-generated method stub
				while(rs.next())
				{
					Student obj = new Student();
					obj.setRoll(rs.getInt(1));
					obj.setName(rs.getString(2));
					obj.setEmail(rs.getString(3));
					obj.setMobile(rs.getString(4));
					list.add(obj);
				}
				return null;
			}
			
		});
		return list;
		
	}
	
}
