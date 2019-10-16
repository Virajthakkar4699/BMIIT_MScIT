#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
		node(int d,node *N=NULL)
		{
			data=d;
			next=N;
		}
};

class singlylinkedlist
{
		public:
				
			node *temp;
			node *head,*newnode,*head1;
			
			singlylinkedlist()
			{
				head=NULL;
				head1=NULL;
			}
			
			void Creation(int d)
			{
				if(head==NULL)
				{
					head=newnode=new node(d);
					
				}
				else
				{
					newnode->next= new node(d);
					newnode=newnode->next;
				}
			}
			
			void Traversal()
			{
				temp=head;
				while(temp!=NULL)
				{
					cout<<"| "<<temp->data;
					temp=temp->next;
				}
				cout<<"|"<<endl;
			}
			
			void InsertionAtFirst(int d)
			{
				newnode=new node(d);
				newnode->next=head;
				head=newnode;
			}
			
			void InsertionAtLast(int d)
			{
				newnode=new node(d);
				temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;	
				}
				temp->next=newnode;
			}
			
			void InsertionAtMiddle(int pos,int d)
			{
				newnode=new node(d);
				temp=head;
				for(int i=1;i<pos-1;i++)
				{
					temp=temp->next;
				}
				newnode->next=temp->next;
				temp->next=newnode;
			}
			
			void DeletionAtFirst()
			{
				head=head->next;
			}
			
			void DeletionAtLast()
			{
				temp=head;
				while(temp->next->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=NULL;
			}
			
			void DeletionAtMiddle(int pos)
			{
				temp=head;
				for(int i=1;i<pos-1;i++)
				{
					temp=temp->next;
				}
				temp->next=temp->next->next;
			}
			
			void Searching(int key)
			{
				int found=0;
				temp=head;
				while(temp!=NULL)
				{
					if(temp->data==key)
					{
						found=1;
					}
					else
					{
						found=0;
					}
				}
				
				if(found==1)
				{
					cout<<"Element found "<<endl;
				}
				else
				{
					cout<<"Element not found"<<endl;
				}
			}
			
			void Merging()
			{
				temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=head1;
			}

			void Copying(int d)
			{
				temp=head;
				while(temp!=NULL)
				{
					if(head1==NULL)
					{
						head1=newnode=new node(d);
					}
					else
					{
						newnode->next=new node(d);
						newnode=newnode->next;
					}
					temp=temp->next;

				}

			}
};

int main()
{
	singlylinkedlist S;
	
	int Data,P;
	int choice;

	while(1)
	{
		cout<<"MENU"<<endl;
		cout<<"1 For Creation"<<endl;
		cout<<"2 For Traversal "<<endl;
		cout<<"3 For Insertion AT first"<<endl;
		cout<<"4 For Insertion At la           erst"<<endl;
		cout<<"5 for Insertion At Middle "<<endl;
		cout<<"6 for Deletion at first"<<endl;
		cout<<"7 for Deletion at last"<<endl;
		cout<<"8 for Deletion at middle"<<endl;
		cout<<"9 for searching"<<endl;
		cout<<"10 for copying"<<endl;
		cout<<"11 for Merging"<<endl;

		cout<<"Enter your choice : ";
		cin>>choice;
		
		if(choice==0)
		{
			break;

		}

		else
		{
			switch(choice)
			{
				case 1:
					cout<<"Enter Your Data : ";
					cin>>Data;
					cout<<endl;
					S.Creation(Data);
					break;
				case 2:
					cout<<"Traversal"<<endl;
					S.Traversal();
					break;
			
				case 3:
					cout<<"Enter Your Data : ";
					cin>>Data;
					cout<<endl;
					S.InsertionAtFirst(Data);
					break;
				case 4:
					cout<<"Enter Your Data : ";
					cin>>Data;
					cout<<endl;
					S.InsertionAtLast(Data);
					break;
				case 5:
					cout<<"Enter Your Data : ";
					cin>>Data;
					cout<<"Enter your position : ";
					cin>>P;
					cout<<endl;
					S.InsertionAtMiddle(P,Data);
					break;
				case 6:
					S.DeletionAtFirst();
					break;
				case 7:
					S.DeletionAtLast();
					break;
				case 8:
					cout<<"Enter your position : ";
					cin>>P;
					cout<<endl;
					S.DeletionAtMiddle(P);
					break;
				case 9:
					cout<<"Enter element to search : ";
					cin>>Data;
					cout<<endl;
					S.Searching(Data);
					break;
				case 10:
					cout<<endl;
					S.Copying();
					break;
				case 11:
					cout<<"Merging"<<endl;
					S.Merging();
					break;

			}
		}

	}

	return 0;
}
					
					 
