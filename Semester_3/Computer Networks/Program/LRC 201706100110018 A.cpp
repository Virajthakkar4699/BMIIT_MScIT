#include<iostream>

using namespace std;

class LRC
{
	public :
		
			char R1[8];
			char R2[8];
			char R3[8];
			char R4[8];
			char S1[8];
			char S2[8];
			char S3[8];
			char S4[8];
			char Rlrc[8];
			char Slrc[8];
			
			
			void senderinput(int n)
			{
			cout<<"INPUT 1st FRAME"<<endl;
			for(int i=0;i<n;i++)
			{
			
			do
			{
				cout<<"S1["<<i<<"] : ";
			
				cin>>S1[i];
			
				if(S1[i]=='1'|| S1[i]=='0')
				{
					
					break;
					
				}
				
				cout<<"Invalid Input "<<endl;
					
			}while(S1[i]);
		
			}
			
			cout<<"INPUT 2nd FRAME"<<endl;
			for(int j=0;j<n;j++)
			{
			
			do
			{
				cout<<"S2["<<j<<"] : ";
			
				cin>>S2[j];
			
				if(S2[j]=='1' || S2[j]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(S2[j]);
		
			}
			
			
			cout<<"INPUT 3rd FRAME"<<endl;
			for(int k=0;k<n;k++)
			{
			
			do
			{
				cout<<"S3["<<k<<"] : ";
			
				cin>>S3[k];
			
				if(S3[k]=='1' || S3[k]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(S3[k]);
		
			}



			cout<<"INPUT 4th  FRAME"<<endl;
			for(int l=0;l<n;l++)
			{
			
			do
			{
				cout<<"S4["<<l<<"] : ";
			
				cin>>S4[l];
			
				if(S4[l]=='1' || S4[l]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(S4[l]);
		
			}		
			}
			
			
			
			
		void senderdisplay(int n)	
		{

	
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<S1[i];
				
			}
			cout<<"|";
			cout<<endl;
			
			
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<S2[i];
				
			}
			cout<<"|";
			cout<<endl;
			
			
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<S3[i];
				
			}
			cout<<"|";
			cout<<endl;
			
			
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<S4[i];
				
			}
			cout<<"|";
			cout<<endl;
	
		}
		
		
		
		void senderlrc(int n)
		{
			
				for(int i=n-1;i>=0;i--)
				{
					if((S1[i]+S2[i]+S3[i]+S4[i])%2==0)
					{
						Slrc[i]='0';
					}
					else
					{
						Slrc[i]='1';
					}
					
					
					
				}
				cout<<endl;
				for(int i=0;i<n;i++)
				{
			
					  cout<<"| "<<Slrc[i];
				
				}
				cout<<"|";
				cout<<endl;
				
		}	
		
		
		
		
		
		
			void receiverinput(int n)
			{
			cout<<"INPUT 1st FRAME"<<endl;
			for(int i=0;i<n;i++)
			{
			
			do
			{
				cout<<"R1["<<i<<"] : ";
			
				cin>>R1[i];
			
				if(R1[i]=='1' || R1[i]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(R1[i]);
		
			}
			
			cout<<"INPUT 2nd FRAME"<<endl;
			for(int j=0;j<n;j++)
			{
			
			do
			{
				cout<<"R2["<<j<<"] : ";
			
				cin>>R2[j];
			
				if(R2[j]=='1' || R2[j]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(R2[j]);
		
			}
			
			
			cout<<"INPUT 3rd FRAME"<<endl;
			for(int k=0;k<n;k++)
			{
			
			do
			{
				cout<<"R3["<<k<<"] : ";
			
				cin>>R3[k];
			
				if(R3[k]=='1' || R3[k]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(R3[k]);
		
			}



			cout<<"INPUT 4th  FRAME"<<endl;
			for(int l=0;l<n;l++)
			{
			
			do
			{
				cout<<"R4["<<l<<"] : ";
			
				cin>>R4[l];
			
				if(R4[l]=='1' || R4[l]=='0')
				{
					
					break;
					
				}
				cout<<"Invalid Input "<<endl;
					
			}while(R4[l]);
		
			}		
			}
			
			
			
			
		void receiverdisplay(int n)	
		{

	
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<R1[i];
				
			}
			cout<<"|";
			cout<<endl;
			
			
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<R2[i];
				
			}
			cout<<"|";
			cout<<endl;
			
			
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<R3[i];
				
			}
			cout<<"|";
			cout<<endl;
			
			
			for(int i=0;i<n;i++)
			{
			
			  cout<<"| "<<R4[i];
				
			}
			cout<<"|";
			cout<<endl;
	
		}	
		
		
		
		
		
		void receiverlrc(int n)
		{
			
				for(int i=n-1;i>=0;i--)
				{
					if((R1[i]+R2[i]+R3[i]+R4[i])%2==0)
					{
						Rlrc[i]='0';
					}
					else
					{
						Rlrc[i]='1';
					}
					
					
					
				}
				cout<<endl;
				for(int i=0;i<n;i++)
				{
			
					  cout<<"| "<<Rlrc[i];
				
				}
				cout<<"|";
				cout<<endl;
				
		}
		
		
		void checkingerror(int n)
		{
			int count1;
			for(int i=0;i<n;i++)
			{
				if(Slrc[i]!=Rlrc[i])
				{
					count1++;
				}

			}
						
			if(count1==0)
			{
				cout<<"-->THERE IS NO ERROR IN THE DATA "<<endl;
				
			}
			else if(count1==1)
			{
				
				cout<<"-->THERE IS SINGLE BIT ERROR IN THE DATA"<<endl;
				
			}	
			else if (count1>1)
			{
				cout<<"-->THERE IS  BURST ERROR IN THE DATA"<<endl;
			}
		}
		
			
};

int main()
{
	int N=8;
	LRC L;
	
	cout<<"SENDER'S INPUT..........."<<endl;
	L.senderinput(N);
	cout<<endl;
	
	cout<<"RECEIVER'S INPUT........."<<endl;
	L.receiverinput(N);
	cout<<endl;
	
	cout<<"DISPALY SENDER'S DATA...."<<endl;
	L.senderdisplay(N);
	cout<<endl;
	cout<<"SENDER'S LRC............."<<endl;
	L.senderlrc(N);
	cout<<endl;
	
	cout<<"DISPLAY RECEIVER'S DATA..."<<endl;
	L.receiverdisplay(N);
	cout<<endl;
	cout<<"RECEIVER'S LRC............."<<endl;
	L.receiverlrc(N);
	cout<<endl;
	
	cout<<"CHECKING IF THERE'S ERROR IN THE DATA "<<endl;
	cout<<endl;
	
	L.checkingerror(N);
	cout<<endl;
	
	
	
	
	return 0;
	
}


