package furnishpackage;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Mattress {
	
	@Id
	@GeneratedValue(strategy=GenerationType.AUTO)
	public int id;
	public int person;
	public String type;
	public int layers;
	public int price;
	public Mattress() {
		super();
	}
	public Mattress(int id, int person, String type, int layers, int price) {
		super();
		this.id = id;
		this.person = person;
		this.type = type;
		this.layers = layers;
		this.price = price;
	}
	@Override
	public String toString() {
		return "Mattress [id=" + id + ", person=" + person + ", type=" + type + ", layers=" + layers + ", price="
				+ price + "]";
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public int getPerson() {
		return person;
	}
	public void setPerson(int person) {
		this.person = person;
	}
	public String getType() {
		return type;
	}
	public void setType(String type) {
		this.type = type;
	}
	public int getLayers() {
		return layers;
	}
	public void setLayers(int layers) {
		this.layers = layers;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	
	

}
