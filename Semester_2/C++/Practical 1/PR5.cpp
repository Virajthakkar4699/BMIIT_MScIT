#include<iostream>
using namespace std;

class member_detail
{
	int id;
	char name[20];
	char category[20];
	char college_name[20];
	public:
	void getdetails()
		{	
			cout<<"Please Enter ID:- ";
			cin>>id;
			cout<<"\nPlease Enter Name :-";
			cin>>name;
			cout<<"\nPlease Enter Category Student/Faculty :-";
			cin>>category;
			cout<<"\nPlease Enter college_name :-";
			cin>>college_name;
		}
	void displaydata()
		{
			cout<<"ID of member is :- "<<id<<endl;
			cout<<"name of member is :- "<<name<<endl;
			cout<<"Category of member is :- "<<category<<endl;
			cout<<"College_Name of member is :- "<<college_name<<endl;
		}	
	
};
class book_detail
{
	int bookid;
	char bname[20];
	char bauthor[20];
	int bookcall;
	public:
	void getdata()
		{
			cout<<"Please Enter BookID:- ";
			cin>>bookid;
			cout<<"\nPlease Enter Book_Name :- ";
			cin>>bname;
			cout<<"\nPlease Enter Author Name :- ";
			cin>>bauthor;
			cout<<"\nPlease Enter Book Call No:- ";
			cin>>bookcall;
		}
	void displaydata()
		{
			cout<<"ID of Book is :- "<<bookid<<endl;
			cout<<"name of book is :- "<<bname<<endl;
			cout<<"name of author is :- "<<bauthor<<endl;
			cout<<"College_Name of member is :- "<<bookcall<<endl;
		}
	
};

int main()
{
	member_detail m1;
	book_detail b1;
	
	sys: cout<<"Press 1 to enter member details.\nPress 2 to access member details"<<endl;
	cout<<"Press 3 to enter book details.\nPress 2 to access book details"<<endl;
	cout<<"Press 5 to exit application"<<endl;
	
	int input;
		
	while(1)
	{
	cin>>input;	
		if(input==1)
		{
			m1.getdetails();//member_detail get_deta
			goto sys;		
		}
	else if(input==2)
		{
			m1.displaydata();//member_detail access
			goto sys;		
		}
	else if(input==3)
		{
			b1.getdata();//book_detail get_data
			goto sys;		
		}
	else if(input==4)
		{
			b1.displaydata();//book_detail access
			goto sys;		
		}
	else if(input==5)
		{
		return 0;
		}
	else
		{
			cout<<"Please enter valid choice";
		}
	}		
}
