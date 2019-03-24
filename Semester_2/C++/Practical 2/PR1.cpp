#include<iostream>
using namespace std;

class student
{
	int enro;
	char name[20];
	float perc;
	char grade;
	public:
	
		void getdetails()
		{
			cout<<"Please Enter enrollment Number:- ";
			cin>>enro;
			cout<<"Please Enter Name of Student:- ";
			cin>>name;
			cout<<"Enter Percentage of Student:- ";
			sys: cin>>perc;
			if(perc>90 && perc<=100)
				{grade='A';}
			else if(perc>80 && perc<=90)
				{grade='B';}
			else if(perc>60 && perc<=80)
				{grade='C';}
			else if(perc>40 && perc<=60)
				{grade='D';}
			else if(perc>30 && perc<=100)
				{grade='E';}
			else if(perc<=30)
				{grade='F';}//FAIL
			else
				{cout<<"Please enter valid input [0 TO 100]";
				goto sys;}
		}
	
		void displaydetails()
		{
			cout<<"Student Detials."<<endl;
			cout<<"Enrollment of Student is "<<enro<<endl;
			cout<<"Name of Student is "<<name<<endl;
			cout<<"Percentage of student is "<<perc;
			cout<<"Grade of student is "<<grade;
		}
};

int main()
{
	student s[3];
	
	int index;
	for(index=0;index<3;index++)
	{	
		s[index].getdetails();
	}
	
	int topperindex=0;
	float max=s[0].perc;
	for(index=0;index<3;index++)//array starts from 0
	{
		if(s[index].perc>max)
			{
				max=s[index].perc;
				topperindex=index;
			}
	}
	
	sys1: cout<<"Press 1 for getting Topper Result Details\nPress 2 for getting details enro wise"<<endl;
	int choice;
	if(choice==1)
		{
			s[topperindex].displaydetails();
		}
	else if(choice==2)
		{
			int enrosearch;
			cout<<"Enter Enrollment number please:- ";
			cin>>enrosearch;
			for(index=0;index<3;index++)
			{	
				if (s[index].enro==enrosearch);
					s[index].displaydetails();
				//else
					//cout<<"No Result Found.";
			}			
		}
	else
		{
			cout<<"Enter Valid Choice 1/2 ?";
			goto sys1;
		}
}
