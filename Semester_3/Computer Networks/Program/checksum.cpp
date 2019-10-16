#include<iostream>
using namespace std;

class checksum
{
	public:
			
			int S_sum[8],onescom[8];

			
			void display_senders_data(int *S)
			{

				for(int i=0;i<8;i++)
				{
					cout<<"|"<<S[i];
				}
				cout<<"|"<<endl;



			}


			int *senders_sum(int N,int *S1,int *S2)
			{
				int j=0;
				
				for(int i=N-1;i>=0;i--)
				{
					if(S1[i]==1 && S2[i]==1)
					{
						if(j!=0)
						{
						
							S_sum[i]=1;
							j++;
						}
						else
						{
							S_sum[i]=0;
							j++;
						}
						
				    }
						
					else if(S1[i]==0 && S2[i]==0)
					{
						if(j!=0)
						{
						
							S_sum[i]=1;
							j=0;
						}
						else
						{
							S_sum[i]=0;
							j=0;
						}

					}
					else
					{
						if(j!=0)
						{
						
						S_sum[i]=0;
						j++;
						
						}
						else
						{
							S_sum[i]=1;
							j=0;
						}
					}
				
				}

				cout<<endl;
				cout<<"Sum "<<endl;
				for(int i=0;i<N;i++)
				{
					cout<<"|"<<S_sum[i];
				}
				
				cout<<"|"<<endl;
				
				
				if(j!=0)
				{
					for(int i=N-1;i>=0;i--)
					{
						if(S_sum[i]==1)
						{
							if(j!=0)
							{	
							S_sum[i]=0;
							j++;
							}
						}
						else
						{	
							if(j!=0)
							{
								S_sum[i]=1;
								j=0;
							}
							else
							{
								S_sum[i]=0;
								j=0;
							}

						}

					}
					
					
				cout<<endl<<"Carry Sum :"<<endl;
				
				for(int i=0;i<N;i++)
				{
					cout<<"|"<<S_sum[i];
				}
				
				cout<<"|"<<endl;
				
				}
				
				return S_sum;
		   }

			int *complement(int *comp)
			{
				for(int i=0;i<8;i++)
				{
					if(comp[i]==1)
					{
						onescom[i]=0;
						
					}
					else
					{
						onescom[i]=1;
						
					}
				}
				return onescom;
			}
};

int main()
{
		
	int n=8;
	checksum C;
	int S1[10],S2[10],S3[10],S4[10];
	int R1[10],R2[10],R3[10],R4[10];
	int *carry,*output;
			cout<<"Senders Input "<<endl;
			
				cout<<"INPUT 1st Frame "<<endl;

				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S1["<<i<<"] : "<<endl;
						cin>>S1[i];
						if(S1[i]==1 || S1[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S1[i]);	
				}


				cout<<"INPUT 2st Frame "<<endl;
				
				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S2["<<i<<"] : "<<endl;
						cin>>S2[i];
						if(S2[i]==1 || S2[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S2[i]);

				}


				cout<<"INPUT 3rd Frame "<<endl;
				
				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S3["<<i<<"] : "<<endl;
						cin>>S3[i];
						if(S3[i]==1 || S3[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S3[i]);	
				}


				cout<<"INPUT 4th Frame "<<endl;
				
				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S4["<<i<<"] : "<<endl;
						cin>>S4[i];
						if(S4[i]==1 || S4[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S4[i]);	
				}	

			

			
	cout<<"Senders Data : ";
	cout<<endl;
	C.display_senders_data(S1);
	C.display_senders_data(S2);
	C.display_senders_data(S3);
	C.display_senders_data(S4);
	

	carry=C.senders_sum(n,S1,S2);
	carry=C.senders_sum(n,carry,S3);
	carry=C.senders_sum(n,carry,S4);
	output=C.complement(carry);
	C.display_senders_data(output);
				
				
				cout<<"Receivers Input "<<endl;
			
				cout<<"INPUT 1st Frame "<<endl;

				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S1["<<i<<"] : "<<endl;
						cin>>S1[i];
						if(S1[i]==1 || S1[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S1[i]);	
				}


				cout<<"INPUT 2st Frame "<<endl;
				
				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S2["<<i<<"] : "<<endl;
						cin>>S2[i];
						if(S2[i]==1 || S2[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S2[i]);

				}


				cout<<"INPUT 3rd Frame "<<endl;
				
				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S3["<<i<<"] : "<<endl;
						cin>>S3[i];
						if(S3[i]==1 || S3[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S3[i]);	
				}


				cout<<"INPUT 4th Frame "<<endl;
				
				for(int i=0;i<8;i++)
				{

					do
					{

						cout<<"S4["<<i<<"] : "<<endl;
						cin>>S4[i];
						if(S4[i]==1 || S4[i]==0)
						{
							break;
						}
						cout<<"Enter Valid Input "<<endl;
					}while(S4[i]);	
				}	



				cout<<"Receivers Data : ";
				C.display_senders_data(S1);
				C.display_senders_data(S2);
				C.display_senders_data(S3);
				C.display_senders_data(S4);
	
	
				carry=C.senders_sum(n,S1,S2);
				carry=C.senders_sum(n,carry,S3);
				carry=C.senders_sum(n,carry,S4);
				output=C.complement(carry);
				C.display_senders_data(output);
	
				
	return 0;

}

