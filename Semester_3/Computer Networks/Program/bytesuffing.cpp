#include<iostream>
using namespace std;


class ByteStuffing
{
	public:
		string frame[100];
		int size=8;


		void originalframe()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"Frame["<<i<<"] : ";
				cin>>frame[i];

			}

		}

		void vieworiginaldata()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"|"<<frame[i];

			}
			cout<<"|"<<endl;

		}


		void stuffing()
		{
		
			for(int i=0;i<8;i++)
			{

				if(frame[i]=="esc" || frame[i]=="flag")
				{
					
					size++;
					for(int j=size;j>i;j--)
					{
					
						frame[j]=frame[j-1];
					}	frame[i]="esc";
						
						
						
					
					
				
				}

			}
		}
			
		 	
		 		void datatosend()
		 		{
		 				for(int i=0;i<size;i++)
		 				{
		 						if(frame[i]=="esc" || frame[i]=="flag")
		 						{
		 							for(int j=i;j<size;j++)
		 							{
		 								frame[j]=frame[j+1];
									 }
									 size--;
									 i=i+2;
								 }
						 }
				 }
			

				void display()
				{
					for(int i=0;i<size;i++)
					{
						cout<<"|"<<frame[i];
					}
					cout<<"|"<<endl;
				}
						
			

		

};

int main()
{
	ByteStuffing B;

	B.originalframe();
	B.vieworiginaldata();
	B.stuffing();
	B.display();
	B.datatosend();
	B.display();

	return 0;

}

