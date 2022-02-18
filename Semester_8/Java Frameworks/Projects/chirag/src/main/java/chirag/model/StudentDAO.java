package chirag.model;

import java.sql.PreparedStatement;

import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.PreparedStatementCallback;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import org.springframework.dao.DataAccessException;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.PreparedStatementCallback;
import org.springframework.jdbc.core.ResultSetExtractor;
import org.springframework.jdbc.core.RowMapper;

import com.mysql.cj.protocol.Resultset;

public class StudentDAO {

	private JdbcTemplate jdbc;

	public JdbcTemplate getJdbc() {
		return jdbc;
	}

	public void setJdbc(JdbcTemplate jdbc) {
		this.jdbc = jdbc;
	}
	
	public Boolean save(final Student s)
	{
	String str="insert into studentinfo values(?,?)";
	return jdbc.execute(str,new PreparedStatementCallback<Boolean>() {

	public Boolean doInPreparedStatement(PreparedStatement ps) throws SQLException, DataAccessException {

	ps.setString(1, s.getFname());
	ps.setString(2, s.getLname());

	return ps.execute();
	}

	});
	}
	
}
