package exam.Model;

import org.springframework.jdbc.core.JdbcTemplate;


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

public class CustomerDAO {
	
	private JdbcTemplate jdbc;

	public JdbcTemplate getJdbc() {
		return jdbc;
	}

	public void setJdbc(JdbcTemplate jdbc) {
		this.jdbc = jdbc;
	}

	public CustomerDAO(JdbcTemplate jdbc) {
		super();
		this.jdbc = jdbc;
	}

	public CustomerDAO() {
		super();
		// TODO Auto-generated constructor stub
	}

	@Override
	public String toString() {
		return "CustomerDAO [jdbc=" + jdbc + "]";
	}
	
	public Boolean save(final Customer c)
	{
	String str="insert into customer values(?,?,?,?,?,?)";
	return jdbc.execute(str,new PreparedStatementCallback<Boolean>() {

	public Boolean doInPreparedStatement(PreparedStatement ps) throws SQLException, DataAccessException {

	ps.setString(1, c.getUsername());
	ps.setString(2, c.getC_name());
	ps.setString(3, c.getEmail());
	ps.setString(4, c.getCity());
	ps.setString(5, c.getPincode());
	ps.setString(6, c.getPassword());

	return ps.execute();
	}

	});
	}
	
	
	public List login(Customer c) {
		final List list =new ArrayList();
		String str="select * from customer where email = '"+c.getEmail()+"' and password = '"+c.getPassword()+"'";
		jdbc.query(str, new ResultSetExtractor<Customer>() {

		public Customer extractData(ResultSet rs) throws SQLException, DataAccessException {
		if(rs.next())
		{
		Customer obj=new Customer();
		//obj.setRoll(rs.getInt(1));
		//obj.setName(rs.getString(2));
		obj.setUsername(rs.getString(1));
		obj.setC_name(rs.getString(1));
		obj.setEmail(rs.getString(1));
		obj.setCity(rs.getString(1));
		obj.setPincode(rs.getString(1));
		obj.setPassword(rs.getString(1));
		list.add(obj);
		}
		return null;
		}

		});
		return list;
		}
	


}
