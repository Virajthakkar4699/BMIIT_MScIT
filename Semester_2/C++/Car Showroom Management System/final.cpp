#include<iostream>
using namespace std;
class hostel
{
	int roomnum,temp;
	char name[20];
	char address[50];
	int mobnumber;

	public:

	    	void add()
		{
			int room,temp;

			cout<<"\n\tEnter student details";
			cout<<"\n\t**********************";
			cout<<"\n\n\t Enter room number= ";
			cin>>room;
			temp=check(room);

			if(temp)
				cout<<"\n Sorry room is booked!!";
			else
				{
					roomnum=room;
					cout<<"\n Name=\t";
					cin>>name;
					cout<<"\n Address=\t";
					cin>>address;
					cout<<"\n Phone Number=\t";
					cin>>mobnumber;
					cout<<"\n";

					cout<<"Room is booked!!";
				}

			cout<<"PRESS ANY KEY TO CONTINUE\n";
		}
		void display()
		{
			int room;
			cout<<"Enter room number=\n";
			cin>>room;
			{
				if(roomnum=room)
				{
					cout<<"Student details";
					cout<<"\n*****************";
					cout<<"\nRoom number="<<roomnum;
					cout<<"\nName= "<<name;
					cout<<"\n Address= "<<address;
					cout<<"\nPhone number= "<<mobnumber;
				}
				else
				{
					cout<<"\n Sorry room number not found or vacant!!";
					cout<<"PRESS ANY KEY TO CONTINUE\n";
				}
			}
		}
		void rooms()
		{
			cout<<"\n\t\t\tList of rooms alloted";
			cout<<"\n\t\t\t***********************";
			cout<<"\n\nRoom no.\tName\t\tAddress\t\tPhone number.\n";

			cout<<"\n\n"<<roomnum<<"\t\t"<<name;
			cout<<"\t\t"<<address<<"\t\t"<<mobnumber;

			cout<<"PRESS ANY KEY TO CONTINUE\n";
		}
		void edit()
		{
			int choice,room;

			cout<<"\n EDIT MENU";
			cout<<"\n ************";
			cout<<"\n\n1. Modify student record";
			cout<<"\n\n2. Delete Student record";
			cout<<"\n Enter your choice: ";
			cin>>choice;

			cout<<"\nENter room number= ";
			cin>>room;

			switch(choice)
			{
				case 1:modify(room);
					break;
				case 2:delete_rec(room);
					break;
				default:
					cout<<"Wrong choice!";
			}
			cout<<"\nPress any key to continue!!";
		}

		int check(int room)
		{
			if(roomnum==room)
			{
				temp=1;

			}
			return temp;
		}
		void  modify(int room)
		{
			temp=0;

			if(roomnum==room)
			{
				cout<<"\nEnter New Details";
				cout<<"\n *****************";
				cout<<"\n Name: ";
				cin>>name;
				cout<<" Address: ";
				cin>>address;
				cout<<"Phone  number= ";
				cin>>mobnumber;

				cout<<"\n Record  if modified!";
				temp=1;


			}
			if(temp==0)
				cout<<"\nSorry room no. not found or vacant";
		}


		void  delete_rec(int room)
		{
			int temp=0;
			char ch;

			if(roomnum==room)
			{
				cout<<"\nName :"<<name;
				cout<<"\nAddress :"<<address;
				cout<<"\nPhone number :"<<mobnumber;
				cout<<"\n\n DO you really want to delete record(y/n):";

			cin>>ch;

			if(temp==0)
				cout<<"\nSorry room no.not found or vacant";



			}
		}

		void menu()
		{
			int choice=0;

		while(choice!=5)
			{
				cout<<"\n\t\t\t***************************";
				cout<<"\n\t\t\t----------MAIN MENU------";
				cout<<"\n\t\t\t***************************";
				cout<<"\t\n1.Book room\n";
				cout<<"\t\n2.Student record\n";
				cout<<"\t\n3.Rooms alloted\n";
				cout<<"\t\n4.Edit record\n";
				cout<<"\t\n5.Exit\n";

				cout<<"\tEnter your choice=\n";
				cin>>choice;

			switch(choice)
			{


				case 1:add();
					break;
				case 2:display();
					break;
				case 3:rooms();
					break;
				case 4:edit();
					break;
				default:
					{
						cout<<"\n\n\t\tWrong choice!!";
						cout<<"\n\tPress any key to continue!\n\n";
					}

		}



}
}
};

int main()
{
    	hostel h;

	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t* HOSTEL MANAGEMENT PROJECT *";
    cout<<"\n\t\t\t****************************";
    cout<<"\n\n\nPress any key to continue!";

	h.menu();

return 0;
}