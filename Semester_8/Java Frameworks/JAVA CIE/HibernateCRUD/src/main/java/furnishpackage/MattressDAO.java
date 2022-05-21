package furnishpackage;

import java.util.List;

import javax.transaction.Transactional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.orm.hibernate5.HibernateTemplate;
import org.springframework.stereotype.Component;

@Component
public class MattressDAO {
	
	//@Autowired
	//public HibernateTemplate hibernateTemplate;

//	public HibernateTemplate getHibernateTemplate() {
//		return hibernateTemplate;
//	}
//
//	public void setHibernateTemplate(HibernateTemplate hibernateTemplate) {
//		this.hibernateTemplate = hibernateTemplate;
//	}
//	
	//@Transactional
//	public void createMattress(Mattress mattress)
//	{
//		this.hibernateTemplate.saveOrUpdate(mattress);
//	}
	
//	public List<Mattress> getMattress()
//	{
//		List<Mattress> mattresses=this.hibernateTemplate.loadAll(Mattress.class);
//		return mattresses;
//	}
	
//	public void deleteMattress(int mid)
//	{
//		Mattress m=this.hibernateTemplate.load(Mattress.class, mid);
//		this.hibernateTemplate.delete(m);
//	}
	
//	public Mattress getMattress(int mid)
//	{
//		return this.hibernateTemplate.get(Mattress.class, mid);
//	}

}
