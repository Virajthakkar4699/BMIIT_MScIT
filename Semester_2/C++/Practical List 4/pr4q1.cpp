#include<iostream>
#include<cstring>

using namespace std;

class employee
{
	protected:
	int enro;
	string name;
	string designation;
	
	public:
	void getdetail()
	{
		cout<<"Enter Enro of Employee :";
		cin>>enro;
		
		cout<<"Enter Name of Employee :";
		cin>>name;
		
		cout<<"Enter Designation of Employee :";
		cin>>designation;
	}
		
};
class salary : public employee
{
	int basic_pay;
	int HRA;
	int DA;
	int PF;
	int net_pay;
	
	public:

	int calculate()
	{
		cout<<"Enter Basic Salary : ";
		cin>>basic_pay;
		
		cout<<"Enter HRA : ";
		cin>>HRA;
		
		cout<<"Enter DA : ";
		cin>>DA;
		
		cout<<"Enter PF : ";
		cin>>PF;
		
		net_pay=basic_pay+DA+HRA-PF;
		
	}
	
	void show()
	{
		cout<<"====================================="<<endl;
		cout<<"Enro of Employee is :"<<enro<<endl;
		cout<<"Name of Employee is :"<<name<<endl;
		cout<<"Designation of Employee is :"<<designation<<endl;
		cout<<"Basic Pay of Employee is :"<<basic_pay<<endl;
		cout<<"DA of Employee is :"<<DA<<endl;
		cout<<"HRA of Employee is :"<<HRA<<endl;
		cout<<"PF of Employee is :"<<PF<<endl;
		cout<<"Net Pay of Employee is :"<<net_pay<<endl;
		cout<<"====================================="<<endl;
	}
};

int main()
{
	salary s1;
	s1.getdetail();
	s1.calculate();
	s1.show();
}


