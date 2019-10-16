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

class singlycircularlinkedlist
{
	public:
				
		node *temp,*temp1;
		node *head,*newnode,*head1;
			
		singlycircularlinkedlist()
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
			newnode->next=head;	
		}
	
		void Traversal()
		{
			temp=head;

			do{
				cout<<temp->data<<"->";
				temp=temp->next;
			
			  }while(temp!=head);
			
			cout<<endl;
		}
		
		void InsertionAtFirst(int d)
		{
			newnode=new node(d);
			temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->next=head;
			head=newnode;

		}
		
		void InsertionAtLast(int d)
		{
			newnode= new node(d);
			temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->next=head;
			
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
			temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			head=head->next;
			temp->next=head;
		}
		
		void DeletionAtLast()
		{
			temp=head;
			while(temp->next->next!=head)
			{
				temp=temp->next;
			}
			temp->next=head;
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
			
			do{
				if(temp->data==key)
				{
					found=1;
				}
				else
				{
					found=0;
				}
			}while(temp!=head);
				
			if(found==1)
			{
				cout<<"Element found "<<endl;
			}
			else
			{
				cout<<"Element not found"<<endl;
			}
		}
		
		void Copying()
		{
			temp=head;
			do{
				if(head1==NULL)
				{
					head1=newnode=new node(temp->data);
				}
				else
				{
					newnode->next=new node(temp->data);
					newnode=newnode->next;
				}
				newnode->next=head;
			}while(temp!=head);
			temp=temp->next;
				
		}
		void Merging()
		{
			temp=head;
			temp1=head1;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			while(temp1->next!=head)
			{
				temp1=temp1->next;
			}
			temp->next=head1;
			head=head1->next;
		}
};

int main()
{
	singlycircularlinkedlist SC;

	int Data,P;
	int choice;

	while(1)
	{
		cout<<"MENU"<<endl;
		cout<<"1 For Creation"<<endl;
		cout<<"2 For Traversal "<<endl;
		cout<<"3 For Insertion At first "<<endl;
		cout<<"4 For Insertion At Last "<<endl;
		cout<<"5 For Insertion At Middle "<<endl;
		cout<<"6 For Deletion At first"<<endl;
		cout<<"7 For Deletion At last"<<endl;
		cout<<"8 For Deletion At middle"<<endl;
		cout<<"9 For Searching "<<endl;
		cout<<"10 For Copying "<<endl;
		cout<<"11 For Merging "<<endl;
	

		cout<<"Enter Your choice "<<endl;
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
						SC.Creation(Data);
						break;
					
					case 2:
						cout<<"Traversal"<<endl;
						SC.Traversal();
						break;

					case 3:
						cout<<"Enter Your Data : ";
						cin>>Data;
						cout<<endl;
						SC.InsertionAtFirst(Data);
						break;
					
					case 4:
						cout<<"Enter Your Data : ";
						cin>>Data;
						cout<<endl;
						SC.InsertionAtLast(Data);
						break;
					case 5:
						cout<<"Enter Your Data : ";
						cin>>Data;
						cout<<"Enter your position : ";
						cin>>P;
						cout<<endl;
						SC.InsertionAtMiddle(P,Data);
						break;
					case 6:
						SC.DeletionAtFirst();
						break;
					case 7:
						SC.DeletionAtLast();
						break;
					case 8:
						cout<<"Enter your position : ";
						cin>>P;
						cout<<endl;
						SC.DeletionAtMiddle(P);
						break;
					case 9:
						cout<<"Enter element to search : ";
						cin>>Data;
						cout<<endl;
						SC.Searching(Data);
						break;

					case 10:
						cout<<endl;
						SC.Copying();
						break;
					case 11:
						cout<<"Merging"<<endl;
						SC.Merging();
						break;

			}

		}

	}
		
	return 0;

}
