#include<iostream>
using namespace std;

class manager;
class supervisor
{
	
	int id;
	char name[20];
	int salary, basic, DA, HRA, PF;	
        
	public:
		void getdata()
		{
			cout<<"Enter ID of Supervisor \n";
			cin>>id;
			
			cout<<"Enter Name of supervisor \n";
			cin>>name;
		
			cout<<"Please enter Salary of supervisor \n";
			cin>>salary;
		}
		friend void calsalary(supervisor s1, manager m1);	
};

class manager
{
	int id;
	char name[20];
	int salary, basic, DA, HRA, PF;	
        
	
	public:
		void getdata()
		{
			cout<<"Enter ID of Manager \n";
			cin>>id;
			
			cout<<"Enter Name of Manager \n";
			cin>>name;
		
			cout<<"Please enter Salary of Manager \n";
			cin>>salary;
		}
		friend void calsalary(supervisor s1, manager m1);
};

void calsalary(supervisor s1, manager m1)
{
	
	s1.DA = (s1.basic*4)/100;  //DA=4%
	s1.HRA = (s1.basic*8)/100;  //HRA=8%
	s1.PF = (s1.basic*12)/100;  //PF=12%		
	
        m1.DA = (m1.basic*4)/100;  //DA=4%
	m1.HRA = (m1.basic*8)/100;  //HRA=8%
	m1.PF = (m1.basic*12)/100;  //PF=12%	

        s1.salary = s1.basic + s1.DA + s1.HRA - s1.PF;
	cout<<"Supervisor Salary is "<<s1.salary;

	m1.salary = m1.basic + m1.DA + m1.HRA - m1.PF;
	cout<<"\nManager Salary is "<<m1.salary;
}

int main()
{
	
	supervisor s;
	manager m;
	s.getdata();
        m.getdata();
	calsalary(s,m);

	return 0;

}
