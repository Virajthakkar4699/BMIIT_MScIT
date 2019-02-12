#include<iostream>
using namespace std;

int main()
{
	int marks[4];
	cout<<"Enter 4 Subject Marks"<<endl;
	cin>>marks[1]>>marks[2]>>marks[3]>>marks[4];
	int t_marks=marks[1]+marks[2]+marks[3]+marks[4];
	int perc=((t_marks*100)/400);

	if(perc>=80 && perc<=100)
		cout<<"Distinction";
	else if(perc>=60 && perc<79)
		cout<<"First Class";
	else if(perc>=45 && perc<59)
		cout<<"Second Class";
	else if(perc>=35 && perc<45)
		cout<<"Pass Class";
	else
		cout<<"Fail";
	
	cout<<endl;
	cout<<"End of Programme ."<<endl;
	return 0;
}

