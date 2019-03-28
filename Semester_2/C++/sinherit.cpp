#include<iostream>
#include<cstring>
using namespace std;

class cricket
{
	protected:
	string name;
	int total_matches;
	
	public:
	cricket()
	{
		cin>>name;
		cin>>total_matches;
	}
};

class batsman : public cricket
{

	int runs[total_matches];
	int average_run;
	int best_performance;
	
	public:
	void getmatchdetails()
	{
		for(int i=0;i<total_matches;i++)
		{
			cout<<"Enter Run of Match "<<i+1<<":";
			cin>>runs[i];
		}
		
		int sum=0;	
		for(int i=0;i<total_matches;i++)
		{
			sum=sum+runs[i];
			average_run=sum/total_matches;
		}
		
		best_performance=runs[0];
		for(int i=0;i<total_matches;i++)
		{
			if(runs[i]>best_performance);
				best_performance=runs[i];
		}		
	}
	
	void displaydata()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Total Matches : "<<total_matches<<endl;
		cout<<"Average Runs : "<<average_run<<endl;
		cout<<"best_performace :"<<best_performance<<endl;
	}
		
};

int main()
{
	cricket c1;
	batsman b1;	
	b1.getmatchdetails();
	b1.displaydata();
	
	return 0;
}
