package exam.Model;

public class Customer {
	
	private String username;
	private String c_name;
	private String email;
	private String city;
	private String pincode;
	private String password;
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getC_name() {
		return c_name;
	}
	public void setC_name(String c_name) {
		this.c_name = c_name;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getCity() {
		return city;
	}
	public void setCity(String city) {
		this.city = city;
	}
	public String getPincode() {
		return pincode;
	}
	public void setPincode(String pincode) {
		this.pincode = pincode;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	public Customer(String username, String c_name, String email, String city, String pincode, String password) {
		super();
		this.username = username;
		this.c_name = c_name;
		this.email = email;
		this.city = city;
		this.pincode = pincode;
		this.password = password;
	}
	public Customer() {
		super();
		// TODO Auto-generated constructor stub
	}
	@Override
	public String toString() {
		return "Customer [username=" + username + ", c_name=" + c_name + ", email=" + email + ", city=" + city
				+ ", pincode=" + pincode + ", password=" + password + "]";
	}
	
	

}
