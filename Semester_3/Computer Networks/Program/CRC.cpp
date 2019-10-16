#include<iostream>
using namespace std;

class CRC
{

		
	public:
		
			void display(int N,int *A)
			{
				for(int i=0;i<N;i++)
				{
					cout<<"|"<<A[i];
				}
				cout<<"|"<<endl;
				
			}

			void calculate(int N,int *A)
			{
				int extra=N-1;
					
				for(int i=extra;i<)
				{
				
					
					A[N++]=A[i];
					A[i]=0;
					cout<<A[i];
				}
			
			}
			
};

int main()
{
	CRC C;
	
	int M[10];
	int G[5]={1,0,0,1,1};
	
	
	cout<<"INPUT FOR M(x) : "<<endl;
	
	for(int i=0;i<10;i++)
	{
		do
		{
			cout<<"M["<<i<<"] : ";
			cin>>M[i];
			
			if(M[i]==1 || M[i]==0)
			{
				break;
				
			}
			
			cout<<"Error!! Enter 0 or 1 "<<endl;
			
		}while(M[i]);
		
	}
	
	C.display(10,M);
	C.display(5,G);
	C.calculate(10,M);
	return 0;
	
}
