#include<iostream>

using namespace std;

class parity
{
	public:
	
	int count1,count2;
	char A[8];

	
	void insert(int n)
	{
		
				
		if(n!=8)
		{
			cout<<"Invalid Size of Array "<<endl;
		}
		else
		{
			
			cout<<"INPUT  FRAME"<<endl;
			for(int i=0;i<n;i++)
			{
		
			do
			{
				cout<<"A["<<i<<"] : ";
			
				cin>>A[i];
				
			
				if(A[i]=='1'|| A[i]=='0')
				{
					
					break;
					
				}
				
			
				cout<<"Invalid Input "<<endl;
					
			}while(A[i]);
		
			}
		}
		
	}
	
	void display(int n)	
	{

	
		for(int i=0;i<n;i++)
		{
			
		  cout<<"| "<<A[i];
				
		}
		cout<<"|";
		cout<<endl;
	
	}
		
	void evenparity(int n)
	{
		
		
		for(int i=0;i<n;i++)
		{
			if(A[i]=='1')
			{
				count1++;
			}
			
		}
		
		if(count1%2==0)
		{
		
			cout<<"In This even parity no. of 1's are even so,Even Parity is : "<<endl;
			
			for(int i=0;i<n+1;i++)
			{
			 A[n]=A[n+1];
			 A[n+1]='0';
			
		 	 cout<<"| "<<A[i];
				
			}
			cout<<"|";
			cout<<endl;
		}
		else
		{
		
			cout<<"In This even parity no. of 1's are odd so,Even Parity is : "<<endl;
			
			for(int i=0;i<n+1;i++)
			{
			
			A[n]=A[n+1];
			A[n+1]='1';
		 	 cout<<"| "<<A[i];
				
			}
			cout<<"|";
			cout<<endl;
		}
		
	}
	
	void oddparity(int n)
	{
		for(int i=0;i<n;i++)
		{
			if(A[i]=='1')
			{
				count1++;
			}
			
		}
		
		if(count1%2==0)
		{
		
			cout<<"In This odd parity no. of 1's are even so,Odd parity is : "<<endl;
			
			for(int i=0;i<n+1;i++)
			{
			 A[n]=A[n+1];
			 A[n+1]='1';
			
		 	 cout<<"| "<<A[i];
				
			}
			cout<<"|";
			cout<<endl;
		}
		else
		{
		
			cout<<"In This odd parity no. of 1's are even so,Odd parity is : "<<endl;
			
			for(int i=0;i<n+1;i++)
			{
			
			A[n]=A[n+1];
			A[n+1]='0';
		 	 cout<<"| "<<A[i];
				
			}
			cout<<"|";
			cout<<endl;
		}
	}
};

int main()
{
		int N;
		cout<<"Enter Size of array :"<<endl;
		cin>>N;
	
		parity P;
		int choice;
		P.insert(N);
		P.display(N);
		
		while(1)
		{
	
			cout<<endl;	
			cout<<"Menu"<<endl;	
			cout<<"1 for Even Parity"<<endl;
			cout<<"2 for Odd Parity"<<endl;
			cout<<"Enter your choice : ";
			cin>>choice;
			cout<<endl;
			
		
		
			if(choice==0)
			{
				exit(1);
			}
		
			switch(choice)
			{
							case 1:
									P.evenparity(N);
									break;
							case 2:
									P.oddparity(N);
									break;
							default :
									cout<<"Invalid Input";
									break;
									
		    }
		
		}
	return 0;
	
}
		




