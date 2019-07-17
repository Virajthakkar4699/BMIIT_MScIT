#include<iostream>
#include<cstring>
using namespace std;

class student
{
	public:
	static int rollno[];
	static int mark1[];
	static int mark2[];
	static int mark3[];
        int total[10];
	char grade[10];
	
	void totalmarks(){
	//function to calculate total marks of each student.
	
	int index=0;
	 
	for(index=0;index<10;index++)
	{
	        total[index]=mark1[index]+mark2[index]+mark3[index];
	}
	   
	}
	
	void assigngrade(){
	//function to assign grade.
	
	int index=0;
	 
	for(index=0;index<10;index++)
	{
	        int perc=(total[index]*100)/300;
	        
	        if(perc>=90)
	                grade[index]='O';
	        else if(perc>=80 && perc<90)
	                grade[index]='A';
	        else if(perc>=70 && perc<80)
	                grade[index]='B';
	        else if(perc>=60 && perc<70)
	                grade[index]='C';
	        else if(perc>=50 && perc<60)
	                grade[index]='D';
	        else if(perc<50)
	                grade[index]='F';
	        else
	                cout<<"Invalid Value";
	}
	
	}
	
	void display(){
	//function to display list on screen.
	cout<<"\n \n";
	cout<<"==================================="<<endl;
	cout<<" ---------STUDENT REPORT---------  "<<endl;
	cout<<"==================================="<<endl;
	
	
	int index=0;
	
	for(index=0;index<10;index++)
	{
	
	cout<<"       Details of Student "<<index+1<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"        Roll Number= "<<rollno[index]<<endl;
	cout<<"        Marks 1="<<mark1[index]<<endl;
	cout<<"        Marks 2="<<mark2[index]<<endl;
	cout<<"        Marks 3="<<mark3[index]<<endl;
	cout<<"        Total  ="<<total[index]<<endl;
	cout<<"        Grade = "<<grade[index]<<endl;
	cout<<"\n \n";
	
	}
	}
	
	void search(){
	//funtion to search for roll no.
	
	int searchkey,index;
	cout<<"Enter Roll Number to search for 1-10"<<endl;
	cin>>searchkey;
	index=searchkey-1;
	
	cout<<"       Details of Student "<<index+1<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Roll Number= "<<rollno[index]<<endl;
	cout<<"Marks 1="<<mark1[index]<<endl;
	cout<<"Marks 2="<<mark2[index]<<endl;
	cout<<"Marks 3="<<mark3[index]<<endl;
	cout<<"Total  ="<<total[index]<<endl;
	cout<<"Grade = "<<grade[index]<<endl;
	cout<<"\n \n";
	
	//CHeck The Record not the index.
	
	
	}
	
	void deleteroll(){
	//function to delete any roll no.
	}
	
	


};

int student::rollno[10]={1,2,3,4,5,6,7,8,9,10};
int student::mark1[10]={10,20,30,40,50,60,70,80,90,100};
int student::mark2[10]={10,20,30,40,50,60,70,80,90,100};
int student::mark3[10]={10,20,30,40,50,60,70,80,90,100};

int main()
{
	student s;
	s.totalmarks();
	s.assigngrade();
	s.display();
	s.search();
}
