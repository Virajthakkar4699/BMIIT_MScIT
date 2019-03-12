#include<iostream>
using namespace std;

class weight 
{
	int kg;
	public:
	
	weight()
		{kg=0;
		cout<<"Initial Value of KG=0"<<endl;}
	weight(int x)
	{
		kg=x;
		cout<<"Initial Value of KG= "<<kg<<endl;
	}
	weight operator ++()
	{
		++kg;
		cout<<"Operator 1 called pre inc __ Kg= ";
	}
	weight operator ++(int)//Post Increment
	{
		cout<<"\nValue of Kg Before Post Inc = "<<kg<<endl;
		kg++;
		cout<<"Operator 2 called post inc __ Kg= ";
	}
	weight operator --()
	{
		--kg;
		cout<<"Operator 3 called pre dec __ Kg= ";
	}
	weight operator --(int) //Post decrement
	{
		cout<<"\nValue of Kg Before Post dec = "<<kg<<endl;
		kg--;
		cout<<"Operator 4 called post dec __ Kg= ";
	}
	void printweight()
	{
		cout<<kg<<endl;
	}
};


int main()
{
	weight w1;
	++w1;
	w1.printweight();	
	w1++;
	w1.printweight();
	
	--w1;
	w1.printweight();
	w1--;
	w1.printweight();
	
	return 0;
}

