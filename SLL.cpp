#include<iostream>
using namespace std;

class node
{
	
	int data;
	int ch;
	node *next;
	node *newnode;
	node *head;
	
	public:
	node(int info, node *nxt=NULL,node *newn=NULL, node *h=NULL)
	{
		data=info;
		next=nxt;
		newnode=newn;
		head=h;
	}
	
	void createnode()
	{
		do{
		
			if(head==NULL)
				{
					head= newnode = new node(data);
				}
			else
				{
					newnode->next=new node(data);
					newnode=newnode->next;
				}
			char ch;
			cout<<"Do You want to add another node ? Y/N";
			cin>>ch;
		}while(ch==1);
			
	}
	
	void traverse()
	{
		
	}
};

int main()
{
	node s1(100);
	s1.createnode();
}
