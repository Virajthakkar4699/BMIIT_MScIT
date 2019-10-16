//doubly circuler link list

#include<iostream>
using namespace std;
class node
{
	public:
		
	int data;
	node *next;
	node *pre;

	node(int d , node *n = NULL, node *p =NULL)
	{
		
		data = d;
		
		next = n;
		pre=p;
	}
		
};
class doublyc_linklist 
{
int data,ch,key;
node *temp, *newnode, *head, *head1, *temp1;
	public:
		doublyc_linklist()
		{
			temp=newnode=head=head1=NULL;
		}
		
		void creation();
		void traversal();
		void insertion_first();
		void insertion_last();
		void insertion_middle();
		void deletion_first();
		void deletion_last();
		void deletion_middle();
		void copying();
		void merging();
		void copied_link_list_traversal();
		void searching();
};
void doublyc_linklist::creation()
{
	char ch;
	
	do
	{
		cout << "Enter Data = ";
		cin >> data;
		
		if(head == NULL)
		{
			head = newnode = new node(data);
		}
		else
		{
			newnode->next = new node(data);
			newnode->next->pre=newnode;
			newnode = newnode->next;
		}
		head->pre=newnode;
		newnode->next=head;
		
		cout << "Continue Creation = ";
		cin >> ch;
		
	}
	while(ch=='y');
}
void doublyc_linklist::traversal()
{
	temp = head;
	
	do
	{
		if(temp->next == NULL)
		{
			cout << temp->data ;
		}
		else
		{
			cout << temp->data << "<->";
		}
		
		temp = temp->next;
		
	}while(temp!=head);
	//while(temp->next!=NULL)
	//{
		//temp=temp->next;
	//}
	//while(temp!=NULL)
	//{
		//cout<<temp->data;
		//temp=temp->pre;
	//}
	
	//cout<<"<->null";
}
void doublyc_linklist::insertion_first()
{
	temp=head->pre;
	cout << "Enter Data = ";
	cin >> data;
		
	newnode = new node(data);
	newnode->next = head;
	head->pre = newnode;
	temp->next=newnode;
	newnode->pre=temp;
	head=head->pre;

}
void doublyc_linklist::insertion_last()
{
	
	
	temp=head->pre;
	cout << "Enter Data = ";
	cin >> data;
		
	newnode = new node(data);
	newnode->next = head;
	head->pre = newnode;
	temp->next=newnode;
	newnode->pre=temp;
	
}
void doublyc_linklist::insertion_middle()
{
	int position;

	cout << "Enter Position = ";
	cin >> position;
	
	cout << "Enter Data = ";
	cin >> data;

	newnode = new node(data);
	
	temp = head;
	
	for(int i=1;i<position-1;i++)
	{
		temp = temp->next;
	}
	
	newnode->next = temp->next;
	temp->next->pre = newnode;
	newnode->pre=temp;
	temp->next=newnode;
	
}
void doublyc_linklist::deletion_first()
{
	temp=head->pre;
	head = head->next;
	head->pre=temp;
	temp->next=head;
}
void doublyc_linklist::deletion_last()
{
	temp = head->pre->pre;
	temp->next = head;
	head->pre=temp;
}
void doublyc_linklist::deletion_middle()
{
	int pos;
	
	cout << "Enter Position = ";
	cin >> pos;
	
	temp = head;
	
	for(int i=1;i<pos-1;i++)
	{
		temp = temp->next;
	}
	
	temp->next = temp->next->next;
	temp->next->pre = temp;
	
}
void doublyc_linklist::copying()
{
	
	temp = head;
	
	do{
		if(head1 == NULL)
		{
			head1 = newnode = new node(temp->data);
		}
		else
		{
			newnode->next = new node(temp->data);
			newnode->next->pre=newnode;
			newnode = newnode->next;
		}
		newnode->next=head1;
		head1->pre=newnode;
		temp = temp->next;
		
	}while(temp!=head);

	newnode->next=head1;
}
void doublyc_linklist::copied_link_list_traversal()
{
	temp = head1;
	
	do
	{
		if(temp->next == head1)
		{
			cout << temp->data;
		}
		else
		{
			cout << temp->data << "<->";
		}
		
		temp = temp->next;
		
	}while(temp!=head1);
}
void doublyc_linklist::merging()
{
	if(head1 == NULL)
	{
		//cout << "First Make Second Singly Link List Using Copying Function"<<endl;
		//copying();
		//copied_link_list_traversal();
		creation();
	}
	else
	{
			
		temp = head->pre;
		
		
		temp1=head1->pre;
		temp->next = head1;
		head1->pre=temp;
		temp1->next=head;
		head->pre=temp1;	
		
		cout << "\n--Your Merged Singly Link List ---\n";
		
		traversal();
	}
}
void doublyc_linklist::searching()
{
	temp = head;
	
	int flag = 0 ;
	
	cout << "Enter Search Data = ";
	cin >> key;
	
	while(temp!=NULL && flag == 0)
	{
		if(temp->data == key)
		{
			flag = 1;
		}
		temp = temp->next;
		
	}
	
	if(flag == 0)
	{
		cout << "\nElement Not Found\n";
	}
	else
	{
		cout << "\nElement Is Found\n";
	}
}
int main()
{
	int choise;
	char ch='y';
	doublyc_linklist o1;
	o1.creation();
	while(ch=='y')
	{
		cout<<"press1:travalsal"<<endl;
		cout<<"press2:insert at first position"<<endl;
		cout<<"press3:insert at last position"<<endl;
		cout<<"press4:insert at middle position"<<endl;
		cout<<"press5:deletion at first position"<<endl;
		cout<<"press6:deletion at last position"<<endl;
		cout<<"press7:deletion at middle position"<<endl;
		cout<<"press8:copy"<<endl;
		cout<<"press9:marging"<<endl;
		cout<<"press10:searching"<<endl;
		cout<<"take choise";
		cin>>choise;
		switch(choise)
		{
			case 1:
			{
				 o1.traversal();   
				   break;    
			}
			case 2:
			{
				o1.insertion_first();
			   	   o1.traversal();
				   break;
			}
			case 3:
			{
				o1.insertion_last();
				o1.traversal();
				break;
			}
			case 4:
			{
				o1.insertion_middle();
				o1.traversal();
				break;
			}
			case 5:
			{
				o1.deletion_first();
				o1.traversal();
				break;
			}
			case 6:
			{
				o1.deletion_last();
				o1.traversal();
				break;
			}
			case 7:
			{
				o1.deletion_middle();
				o1.traversal();
				break;
			}
			case 8:
			{
				o1.copying();
				o1.traversal();
				cout<<endl;
				o1.copied_link_list_traversal();
				break;
			}
			case 9:
			{
				o1.merging();
				o1.traversal();
				break;
			}
			case 10:
			{
				o1.searching();
				//o1.traversal();
				break;
			}
		}
	cout<<endl;
	cout<<"for any opration press y:";
	cin>>ch;
	}	
}
