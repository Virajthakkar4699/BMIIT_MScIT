#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *lc,*rc;

	node(int d,node *tlc=NULL,node *trc=NULL)
	{
		data=d;
		lc=tlc;
		rc=trc;

	}

};

class BST
{
	public:
		node *root,*ptr,*ptr1,*ptr11,*parent,*newnode,*dptr;
	
			
			
		BST()
		{
			root= new node(1);
			root->lc=new node(2);
			root->rc=new node(3);
			ptr=root->lc;
			ptr1=root->rc;
			ptr->lc=new node(4);
			ptr->rc=new node(5);
			ptr1->lc=new node(6);
			ptr1->rc=new node(7);

		}

		void Insertion(node *ptr,int item)
		{	
			int flag=0;
			while(ptr!=NULL && flag==0)
			{
				if(item<ptr->data)
				{	
					ptr11=ptr;
					ptr=ptr->lc;
				}
				else if(item>ptr->data)
				{
					ptr11=ptr;
					ptr=ptr->rc;
				}
				else if(ptr->data==item)
				{
					flag=1;
					cout<<"Item Already Exists"<<endl;
					break;
	
				}
			
			}
			if(ptr==NULL)
			{
				newnode=new node(item);
				newnode->lc=NULL;
				newnode->rc=NULL;
				if(ptr11->data<item)
				{
					ptr11->rc=newnode;
				}
				else
				{
					ptr11->lc=newnode;
		
				}
			}
		}

		void Inorder(node *ptr)
		{
			
			//ptr=root;	
			if(ptr!=NULL)
			{
				Inorder(ptr->lc);
				cout<<"->";
				cout<<ptr->data;
		
				Inorder(ptr->rc);
				

			}

		}
		
		void deletion(node *ptr,int item)
		{
			int flag=0;
			int case1;	
			while(ptr!=NULL && flag==0)
			{
				if(item<ptr->data)
				{	
					parent=ptr;
					ptr=ptr->lc;
				}
				else if(item>ptr->data)
				{
					parent=ptr;
					ptr=ptr->rc;
				}
				else if(ptr->data==item)
				{
					flag=1;
					break;
	
				}
			}
			if(flag==0)
			{
				exit(1);
			}
			
			if(ptr->lc==NULL && ptr->rc==NULL)
			{
				case1=1;
			}
			else if(ptr->lc !=NULL && ptr->rc !=NULL)
			{
				case1=3;
			}
			else
			{
				case1=2;
			}
			
			
			if(case1==1)
			{
				if(parent->lc==ptr)
				{
					parent->lc=NULL;
				}
				else
				{
					parent->rc=NULL;
				}
			}
			else if(case1==2)
			{
				if(parent->lc==ptr)
				{
					if(ptr->lc==NULL)
					{
						parent->lc=ptr->rc;
					}
					else
					{
						parent->lc=ptr->lc;
					}
				}
				else if(parent->rc==ptr)
				{
					
					
						if(ptr->lc==NULL)
						{
							parent->rc=ptr->rc;
						}
						else
						{
						parent->rc=ptr->lc;
						}
						
				}
			}
			else if(case1==3)
			{
				dptr=SUCC(ptr);
				item=dptr->data;
				deletion(root,item);
				ptr->data=item;
			}
		}
		node *SUCC(node *tptr)
			{
			
				tptr=ptr->rc;
				if(tptr!=NULL)
				{
					while(tptr->lc!=NULL)
					{
						tptr=tptr->lc;
					}
						
				}	
				
				return(tptr);
	     	}
	

};

int main()
{
	BST B;
	B.Inorder(B.root);
	cout<<endl;
	B.Insertion(B.root,9);
	B.Inorder(B.root);
	cout<<endl;
	B.deletion(B.root,2);
	B.Inorder(B.root);

	return 0;
}
