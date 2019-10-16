//Doubly Linked List
#include<iostream>
using namespace std;
//amit mahida
//201806100110050
class node
{
	public:
		
	int data;
	node *next;
	node *prev;

	node(int d , node *N = NULL, node *p = NULL)
	{
		data = d;
		next = N;
		prev = p;
	}
		
};

class doubly_link_list
{

		
	node *temp , *newnode , *head , *head1;
	
	int data , key;
	
	public:
	
	doubly_link_list()
	{
		temp = newnode = head = head1 = NULL;
	}
	
	void creation();
	void insertion_first();
	void insertion_middle();
	void insertion_last();
	void deletion_first();
	void deletion_middle();
	void deletion_last();
	void copying();
	void merging();
	void searching();
	void traversal();
	void copied_link_list_traversal();	
};


void doubly_link_list::creation()
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
			newnode->next->prev=newnode;
			newnode = newnode->next;
			
		}
		
		cout << "------------------------------\n";
		cout << "Press y For Continue Creation = ";
		cin >> ch;
		cout << "------------------------------\n";
	}
	while(ch=='y');
}
void doubly_link_list::insertion_first()
{
	cout << "Enter Data = ";
	cin >> data;
	
	newnode = new node(data);	
	head->prev=newnode;
	newnode->next=head;
	head=newnode;


}


void doubly_link_list::insertion_middle()
{
	int pos;

	cout << "Enter Position = ";
	cin >> pos;
	
	cout << "Enter Data = ";
	cin >> data;

	newnode = new node(data);
	
	temp = head;
	
	for(int i=1;i<pos-1;i++)
	{
		temp = temp->next;
	}
	
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next=newnode;
	newnode->prev=temp;
}


void doubly_link_list::insertion_last()
{
	cout << "Enter Data = ";
	cin >> data;

	newnode = new node(data);
	
	temp = head;
	
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	
	temp->next = newnode;
	newnode->prev=temp;
	
}
void doubly_link_list::deletion_first()
{
	head = head->next;
}


void doubly_link_list::deletion_middle()
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
	temp->next->prev=temp;
	
}

void doubly_link_list::deletion_last()
{
	temp = head;
	
	while(temp->next->next!=NULL)
	{
		temp = temp->next;
	}
	
	temp->next = NULL;
}

void doubly_link_list::copying()
{
	temp = head;
	
	while(temp!=NULL)
	{
		if(head1 == NULL)
		{
			head1 = newnode = new node(temp->data);
		}
		else
		{
			newnode->next = new node(temp->data);
			newnode->next->prev = newnode;
			newnode = newnode->next;

		}
		
		temp = temp->next;
		
	}
	
}


void doubly_link_list::merging()
{
	if(head1 == NULL)
	{
		cout << "First Make Second Singly Link List Using Copying Function";
	}
	else
	{
			
		temp = head;
		
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		
		temp->next = head1;	
		
		cout << "\n--Your Merged Singly Link List ---\n";
		
		traversal();
	}
}

void doubly_link_list::searching()
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
		cout << "\n--Element Not Found--\n";
	}
	else
	{
		cout << "\n--Element Is Found--\n";
	}
}


void doubly_link_list::copied_link_list_traversal()
{
	temp = head1;
	
	while(temp!=NULL)
	{
		if(temp->next == NULL)
		{
			cout << temp->data;
		}
		else
		{
			cout << temp->data << "<->";
		}
		
		temp = temp->next;
		
	}
	    cout<<"NULL"<<endl;
}

void doubly_link_list::traversal()
{
   class node *prev;
    if (head == NULL)

    {

        cout<<"List empty,nothing to display"<<endl;

        return;

    }

    prev = head;

    cout<<"The Doubly Link List is :"<<endl;

    while (prev != NULL)

    {

        cout<<prev->data<<" <-> ";

        prev = prev->next;

    }

    cout<<"NULL"<<endl;
}
    





int main()
{
doubly_link_list obj;
	
	char ch = 'y';
	
	cout << "\n--- This Is doubly Link List Program ---\n";
	cout << "\n--- First Do Creation ---\n\n";
	
	int choise;
	
	obj.creation();
	
	while(ch=='y')
	{	
		cout << "Press 1 For Insertion First\n";
		cout << "Press 2 For Insertion Middle\n";
		cout << "Press 3 For Insertion Last\n";
		cout << "Press 4 For Deletion First\n";
		cout << "Press 5 For Deletion Middle\n";
		cout << "Press 6 For Deletion Last\n";
		cout << "Press 7 For Copying\n";
		cout << "Press 8 For Merging\n";
		cout << "Press 9 For Searching\n";
		cout << "Press 10 For Traversal\n";
		cout << "----------------------------\n";
		cout << "Enter Your Choise = ";
		cin >> choise;	
		cout << "----------------------------\n";	
		
		switch(choise)
		{
			case 1:obj.insertion_first();
			   	   obj.traversal();
				   break;
			
			case 2:obj.insertion_middle();
			       obj.traversal();
			       break;
			       
			case 3:obj.insertion_last();
			       obj.traversal();
			       break;   
				   
			case 4:obj.deletion_first();
			       obj.traversal();
			       break;
				   
			case 5:obj.deletion_middle();
			       obj.traversal();
			       break;
				   
			case 6:obj.deletion_last();
			       obj.traversal();
				   break;	   	   	   
			
			case 7:obj.copying();
				   cout << "\n--- 1 Singly Link List ---\n";
				   obj.traversal();
			       cout << "\n--- Copied Singly Link List ---\n";
		     	   obj.copied_link_list_traversal();
			       break;
				   
			case 8:obj.merging();
			       break;
			       
			case 9:obj.searching();
			       break;
				   
		    case 10:obj.traversal();   
				   break;    
				   	   
			default:cout << "\n---Enter Right Choise---\n";
			       break; 	       
		}
		cout << "\n------------------------------------";
		cout << "\nDO YOU WANT CONTINUE PRESS y = ";
		cin >> ch;
		cout << "------------------------------------\n";
	}
	
return 0;	
}

//chirag mahida
//201806100110050


