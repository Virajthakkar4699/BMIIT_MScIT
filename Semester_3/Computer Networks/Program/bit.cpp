#include<iostream>
#include<string.h>
using namespace std;

class BitStuffing
{
	public:
			int frame[20],frame2[20],i,j,k,count;
			
			void input()
			{
				for(int i=0;i<15;i++)
				{
				
				cout<<"Frame["<<i<<"] : ";
				cin>>frame[i];
				
				}
			}
			
			void stuffing()
			{   i=0;
				count=1;
				j=0;
				while(i<15)
				{
					if(frame[i]==1)
					{
						frame2[i]=frame[i];
						for(k=i+1;frame[k]==1 && count<5;k++)
						{
							j++;
							frame2[j]=frame[k];
							count++;
						}
						if(count==5)
						{
							j++;
							frame2[j]=0;
						}
						i=k;
					}
					else
					{
						frame2[j]=frame[i];
					}
					i++;
					j++;
				}
			}
			
			void display()
			{
				for(int i=0;i<j;i++)
				{
					cout<<frame2[i];
				}
			}
};

int main()
{
	BitStuffing B;
	B.input();
	B.stuffing();
	B.display();
	return 0;
}
