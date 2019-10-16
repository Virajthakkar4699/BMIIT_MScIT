/*
1.Write a menu driven program to implement following functionality with Singly Circular Linked List:
A. Creation
B. Insert node at first, last and middle(upon user choice)
C. Delete node from first, last and middle(upon user choice)
D. Copying
E. Merging
F. Searching
G. Traversal
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
	int data;
	node *next;

	node(int d , node *N = NULL)
	{
		data = d;
		next = N;
	}
		
};

class singly_Circular_linklist
{

		
	node *temp , *temp1, *newnode , *head , *head1;
	
	int data , key;
	
	public:
	
	singly_Circular_linklist()
	{
		temp = temp1 = newnode = head = head1 = NULL;
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

void singly_Circular_linklist::creation()
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
			newnode = newnode->next;
			
		}
		newnode->next = head;

		cout << "------------------------------\n";
		cout << "Press Y For Continue Creation & N for no continue= ";
		cin >> ch;
		cout << "------------------------------\n";
	}
	while(ch=='y');
}

void singly_Circular_linklist::insertion_first()
{
	cout << "Enter Data = ";
	cin >> data;
	
	temp=head;

	newnode = new node(data);

	while(temp->next!=head) 
	{

		temp=temp->next;
	}
	
	temp->next=newnode;
	newnode->next=head;
	head=newnode;

}

void singly_Circular_linklist::insertion_middle()
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
	
	temp->next = newnode;
	
}

void singly_Circular_linklist::insertion_last()
{
	temp = head;
	
	cout << "Enter Data = ";
	cin >> data;

	newnode=new node(data);

	while(temp->next!=head)
	{
		temp = temp->next;

	}

	temp->next = newnode;
	newnode->next = head;
}

void singly_Circular_linklist::deletion_first()
{
	temp = head;
	
	while(temp->next!=head)
	{
		temp = temp->next;
	}
	head = head->next;
	temp->next = head;
}

void singly_Circular_linklist::deletion_middle()
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
	
}

void singly_Circular_linklist::deletion_last()
{
	temp = head;
	
	while(temp->next->next!=head)
	{
		temp = temp->next;
	}

	temp->next = head;
}

void singly_Circular_linklist::copying()
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
			newnode = newnode->next;
		}
		
		temp = temp->next;
		
	}while(temp!=head);

	newnode->next=head1;
}

void singly_Circular_linklist::merging()
{
	

	if(head1 == NULL)
	{
		cout << "First Make Second Singly Link List Using Copying Function";
	}
	else
	{
			
		temp = head;
		
		while(temp->next!=head)
		{
			temp = temp->next;
		}
		
		temp->next = head1;

		temp1 = head1;

		while(temp1->next!=head1)
		{
			temp1 = temp1->next;
		}	
		
			temp1->next=head;

		cout << "\n--Your Merged Singly Link List ---\n";
		
		traversal();
	}
}

void singly_Circular_linklist::traversal()
{
	temp = head;
	
	do{
		if(temp->next == head)
		{
			cout << temp->data;
		}
		else
		{
			cout << temp->data << "->";
		}
		
		temp = temp->next;
		
	}while(temp!=head);
}

void singly_Circular_linklist::searching()
{

	temp = head;
	
	int flag = 0 ;
	
	cout << "Enter Search Data = ";
	cin >> key;
	
	do
	{
		if(temp->data == key)
		{
			flag = 1;
		}
		temp = temp->next;
	
	}while(temp->next!=head && flag == 0);
	
	if(flag == 0)
	{
		cout << "\n--Element Not Found--\n";
	}
	else
	{
		cout << "\n--Element Is Found--\n";
	}

}

void singly_Circular_linklist::copied_link_list_traversal()
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
			cout << temp->data << "->";
		}
		
		temp = temp->next;
		
	}while(temp!=head1);
}
int main()
{
	singly_Circular_linklist o1;
	
	char ch = 'y';
	
	cout << "\n---  Singly Circular Link List ---\n";
	cout << "_________________________________\n";
	cout << "\n--- First Do Creation ---\n\n";
	
	int choice;
	
	o1.creation();
	o1.traversal();

	while(ch=='y')
	{	
		cout << "\n\nPress 1 For Insertion First\n";
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
		cout << "Enter Your Choice = ";
		cin >> choice;	
		cout << "----------------------------\n";	
		
		switch(choice)
		{
			case 1:
				o1.insertion_first();
				o1.traversal();

				break;
			
			case 2:
				o1.insertion_middle();
			     	o1.traversal();
			       
				break;
			       
			case 3:
				o1.insertion_last();
			       	o1.traversal();
		
			      	break;   
				   
			case 4:
				o1.deletion_first();
			     	o1.traversal();
			       
				break;
				   
			case 5:
				o1.deletion_middle();
			  	o1.traversal();
			       	
				break;
				   
			case 6:
				o1.deletion_last();
			       	o1.traversal();
				
			   	break;	   	   	   
			
			case 7:
				o1.copying();

				cout << "\n--- 1 Singly Circular Link List ---\n";
				o1.traversal();

			       	cout << "\n--- Copied Singly Circular Link List ---\n";
		     	   	o1.copied_link_list_traversal();

			       	break;
				   
			case 8:
				o1.merging();
		
			       	break;
			       
			case 9:
				o1.searching();

			       	break;
				   
		    	case 10:
				o1.traversal();   
				   
				break;    
				   	   
			default:cout << "\n---Given choice is InValid---\n";
			       
				break; 	       
		}
		cout << "\n------------------------------------";
		cout << "\nDO YOU WANT CONTINUE PRESS y = ";
		cin >> ch;
		cout << "------------------------------------\n";
	}
	
return 0;	

}
