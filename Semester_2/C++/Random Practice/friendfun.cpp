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
			cout<<"Enter ID of Supervisor :-";
			cin>>id;
			
			cout<<"Enter Name of supervisor :-";
			cin>>name;
		
			cout<<"Please enter Salary of supervisor :-";
			cin>>basic;
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
			cout<<"Enter ID of Manager :-";
			cin>>id;
			
			cout<<"Enter Name of Manager :-";
			cin>>name;
		
			cout<<"Please enter Salary of Manager :-";
			cin>>basic;
		}
		friend void calsalary(supervisor s1, manager m1);
};

void calsalary(supervisor s1, manager m1)
{
	
	s1.DA=(5*s1.basic)/100;  //DA=5%
	s1.HRA=(8*s1.basic)/100;  //HRA=8%
	s1.PF=(12*s1.basic)/100;  //PF=12%		
	
       	m1.DA = (m1.basic*5)/100;  //DA=5%
	m1.HRA = (m1.basic*8)/100;  //HRA=8%
	m1.PF = (m1.basic*12)/100;  //PF=12%	

        s1.salary = s1.basic + s1.DA + s1.HRA - s1.PF;
	cout<<"\nSupervisor Salary is "<<s1.salary<< endl;

	m1.salary = m1.basic + m1.DA + m1.HRA - m1.PF;
	cout<<"Manager Salary is "<<m1.salary<<endl;
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
