/*PRACTICAL LIST-1
practical no-1
=============================================================================================
Declare 6 arrays as required to store the students records with Roll no,
Mark1, Mark2, Mark3, Total and grade fields. Array size must be 10
and initialize first four arrays with appropriate values. Perform
following operations on that:
1. Calculate total marks for each students
2. Assign grade to all the students according to following rule
a. If student scores more than 90 percent then grade is ‘O’
b. If student scores more than 80 percent then grade is ‘A’
c. If student scores more than 70 percent then grade is ‘B’
d. If student scores more than 60 percent then grade is ‘C’
e. If student scores more than 50 percent then grade is ‘D’
f. If student scores less than 50 percent then grade is ‘F’
3. List all the records on the screen
4. Search for the record whose roll no is 9
5. Delete a record whose roll no is 5
6. Insert a record just after the record, whose roll no is 7
7. Sort all the records according to the descending order of total
=================================================================================================
*/



#include<iostream>
using namespace std;

class student
{
	public:
		int ch;
		static int Rollno[];
		static int mark1[];
		static int mark2[];
		static int mark3[];
		int total[10];
		char grade[10];
		double per[10];
	
		void display()
		{
			cout<<"                         Marksheet of students           "<<endl<<endl;
			cout<<"r_no"<<"   "<<"Mark1"<<"   "<<"Mark2"<<"   "<<"Mark3"<<"   "<<"Total"<<"   "<<"per"<<"   "<<"grade"<<"   "<<endl<<endl;
			for(int i=0;i<10;i++)	
			{        
				total[i]=mark1[i]+mark2[i]+mark3[i];
				per[i]=total[i]/3;
				if(mark1[i]<33 || mark2[i]<33 || mark3[i]<33)
				{
					grade[i]='f';
				}

				else if(per[i]>=90)
				{
					grade[i]='0';	
				}
				else if(per[i]>=80 && per[i]<90)
				{
					grade[i]='A';
				}
				else if(per[i]>=70 && per[i]<80)
				{
					grade[i]='B';
				}
				else if(per[i]>=60 && per[i]<70)
				{
					grade[i]='C';
				}
				else if(per[i]>=50 && per[i]<60)
				{	
					grade[i]='D';				
				}
				else
				{
					grade[i]='F';	
				}
				cout<<Rollno[i]<<"      ";
				cout<<mark1[i]<<"      ";
				cout<<mark2[i]<<"       ";
				cout<<mark3[i]<<"    ";
				cout<<total[i]<<"     ";
				cout<<per[i]<<"     ";
				cout<<grade[i]<<"\n";
			}
		}

	int search(int number)
	{
		int i=0;
		int found=0,location=-1;

		cout<<endl;

		while (i<=10 && found==0)
		{
			if (Rollno[i]==number)
			{
				found=1;
				location=i;
			}
			else
			{
				i=i+1;
			}
		}
		if (found=0)
		{
			cout<<"No, this number is NOT peresent in the arrary"<<endl;
		}
		else
		{
			
			cout<<"Student "<<number<<" Marksheet Details : "<<endl<<endl;
			cout<<"Roll number         :"<<Rollno[i]<<endl;
			cout<<"Mark1               :"<<mark1[i]<<endl;
			cout<<"Mark2               :"<<mark2[i]<<endl;
			cout<<"Mark3               :"<<mark3[i]<<endl;
			cout<<"Total of all Marks  :"<<total[i]<<endl;
			cout<<"Grade               :"<<grade[i]<<endl;
		}
		return location;
	}

	void Delete( int roll_no)
	{
		int i;
		i=search(roll_no);
		
		if (i==-1)
		{
			cout<<"key not found, no deletion :";
		}
		else
		{
			while (i<10)
			{
				Rollno[i]=Rollno[i+1];
				i=i+1;
			}
		}
		cout<<endl<<endl<<"Array after deletion:\n";
		cout<<"r_no"<<"   "<<"Mark1"<<"   "<<"Mark2"<<"   "<<"Mark3"<<"   "<<"Total"<<"   "<<"per"<<"   "<<"grade"<<"   "<<endl<<endl;
		for(i=0;i<10-1;i++)
		{
			cout<<Rollno[i]<<"      ";
			cout<<mark1[i]<<"      ";
			cout<<mark2[i]<<"       ";
			cout<<mark3[i]<<"    ";
			cout<<total[i]<<"     ";
			cout<<per[i]<<"     ";
			cout<<grade[i]<<"\n";
		}
	} 
	
	void insert()
	{
		int i,location,enro;
		int m1,m2,m3,Total,Per;
		char Grade;
		cout<<endl<<endl<<" insert a new element:";
		cin>>location;
	
		cout<<"Enter the Roll no:";
		cin>>enro;
		cout<<"Enter the mark1:";
		cin>>m1;
		cout<<"Enter the mark2:";
		cin>>m2;
		cout<<"Entre the mark3:";
		cin>>m3;
		Total=m1+m2+m3;
		Per=Total/3;
		if(Per>=90)
		 {
			 Grade='o';	
		 }
		 else if(Per>=80 && Per<90)
		 {
			 Grade='A';
		 }
		 else if(Per>=70 && Per<80)
		 {
			Grade='B';
		 }
		 else if(Per>=60 && Per<70)
		 {
			 Grade='C';
		 }
		 else if(Per>=50 && Per<60)
		 {	
			 Grade='D';				
		 }
		 else
		 {
			Grade='F';	
		 }
	
		for(i=9-1; i>=location-1;i--)
		{
			Rollno[i+1]=Rollno[i];
		}
		Rollno[location-1]=enro;
		mark1[location-1]=m1;
		mark2[location-1]=m2;
		mark3[location-1]=m3;
		total[location-1]=Total;
		per[location-1]=Per;
		grade[location-1]=Grade;
		cout<<"Array after insertion of the new element :\n"<<endl;
		cout<<"r_no"<<"   "<<"Mark1"<<"   "<<"Mark2"<<"   "<<"Mark3"<<"   "<<"Total"<<"   "<<"per"<<"   "<<"grade"<<"   "<<endl<<endl;
		for(i=0;i<=9;i++)
		{
			cout<<Rollno[i]<<"      ";
			cout<<mark1[i]<<"      ";
			cout<<mark2[i]<<"       ";
			cout<<mark3[i]<<"    ";
			cout<<total[i]<<"     ";
			cout<<per[i]<<"     ";
			cout<<grade[i]<<"\n";
		}
	}
	void sorting()
	{
		int i,j,t;
		
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if (total[i]<total[j])
				{
				        t=total[i];
				        total[i]=total[j];
				        total[j]=t;

					t=mark1[i];
				        mark1[i]=mark1[j];
				        mark1[j]=t;

				        t=mark2[i];
				        mark2[i]=mark2[j];
				        mark2[j]=t;

				        t=mark3[i];
				        mark3[i]=mark3[j];
				        mark3[j]=t;

				        t=Rollno[i];
				        Rollno[i]=Rollno[j];
				        Rollno[j]=t;

				        t=grade[i];
				        grade[i]=grade[j];
				        grade[j]=t;

				        t=per[i];
				        per[i]=per[j];
				        per[j]=t;
				}
			}
		}
			
		
		cout<<"r_no"<<"   "<<"Mark1"<<"   "<<"Mark2"<<"   "<<"Mark3"<<"   "<<"Total"<<"   "<<"per"<<"   "<<"grade"<<"   "<<endl<<endl;
		for(i=0;i<=9;i++)
		{
			cout<<Rollno[i]<<"      ";
			cout<<mark1[i]<<"      ";
			cout<<mark2[i]<<"       ";
			cout<<mark3[i]<<"    ";
			cout<<total[i]<<"     ";
			cout<<per[i]<<"     ";
			cout<<grade[i]<<"\n";
		}
		
	}
	void choice()
	{
		
		
			cout<<"==========================="<<endl;
			cout<<"press 1: display the data"<<endl;
			cout<<"press 2: search the record"<<endl;
			cout<<"press 3: delete the record"<<endl;
			cout<<"press 4: insert the record"<<endl;
			cout<<"press 5: sorting the record"<<endl;
	
			cout<<"enter the choice:";
			cin>>ch;
	
			switch(ch)
			{
				case 1:
				{
					display();
					break;
				}
				case 2:
				{
					display();
					search(104);
					break;
				}
				case 3:
				{
					display();
					Delete(110);
					break;	
				}
				case 4:
				{
					display();
					insert();
					break;
				}
				case 5:
				{
					display();
					sorting();
					break;
				}
			
		}
	}
	
};
int student::Rollno[10]={101,102,103,104,105,106,107,108,109,110};
int student::mark1[10]={5,60,90,81,70,45,75,96,84,80};
int student::mark2[10]={80,65,78,44,66,66,77,88,99,22};
int student::mark3[10]={98,78,98,76,0,87,98,56,87,43};

int main()
{
	student s1;
	int ch;
	while(ch<!5)
	{
	s1.choice();
	}
	return 0;
}


