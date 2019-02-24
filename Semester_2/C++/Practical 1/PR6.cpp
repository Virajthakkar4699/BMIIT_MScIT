#include<iostream>
using namespace std;

int main()
{
	int array1[5];
	int index=0;

	for(index=0;index<5;index++)
		{cout<<"Please Enter Value at index value "<<index<<":- ";
		cin>>array1[index];}
	
	for(index=0;index<5;index++)
		cout<<"Value at index position "<<index<<" is "<<array1[index]<<endl;
	
	char input;
	cout<<"Do you want to change any values Y/N ? :-";
	cin>>input;

	if(input=='Y' ||input=='y')
		{	
			int indexchange;
			cout<<"Please enter index Value to Change values :- ";
			cin>>indexchange;
			int value;
			cout<<"Please enter Value to enter in array :- ";
			cin>>value;
			array1[indexchange]=value;
	
			for(index=0;index<5;index++)
			cout<<"Value at index position "<<index<<" is "<<array1[index]<<endl;
		}
	else if(input=='N' || input=='n') 
		{
			return 0;
		}
	else 
		{cout<<"Please Enter Valid input";}
}
