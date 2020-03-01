/*
1.Write a menu driven program to implement following functionality with circular queue using array:
A. Insert element (Enqueue)
B. Remove element (Dequeue)
C. Display the queue

*/
#include<iostream>
using namespace std;
#define size 5
class circular_queue
{

	int front , rear , data ,next;
	
	int queue[size];
	
	public:
		
		circular_queue()
		{
			front = rear = 0;
			
			for(int i=0;i<5;i++)
			{
				queue[i] = '\0';
			}
				
		}
		
		void enqueue();
		void dequeue();
		void display();
	
};
void circular_queue::enqueue()
{

	if(front == 0)
	{	
		front++;
		rear++;
		cout << "Enter Data = ";
		cin >> data;
		
		queue[front] = data; 
	}
	else
	{
		
		next = rear % size + 1;
	
		if(next != front)
		{
			rear = next;
			
			cout << "Enter Data = ";
			cin >> data;
			
			queue[rear] = data;
		}
		else
		{
				cout << "-----------------\n";
				cout << "Queue Is Full\n";
				cout << "-----------------\n";
		}
	}
}
void circular_queue::dequeue()
{
	if(front == 0)
	{
		cout << "-----------------\n";
		cout << "Queue Is Empty\n";
		cout << "-----------------\n";
	}
	else
	{
		cout << "Deleted " << queue[front] << "\n";
		if(front == rear)
		{
			front = rear = 0;	
			
		}
		else
		{
			queue[front] = 0;
			front = front % size + 1;
		
		}
	}
}
void circular_queue::display()
{
	int i;

	if(front == 0)
	{
		cout << "Queue Is Empty\n";
	}
	else
	{
		for(i=0;i<=size;i++)
		{
			if(queue[i]=='\0')
			{
				continue;
			}
			else
			{
				cout << queue[i] << "\n";
			}
				
		}
	}

}
int main()
{

	circular_queue obj;
	int choice;
	
	cout << "\n--- Circular Queue & Size Is 5 ---\n\n";
		
	while(choice!=4)
	{
			cout << "--------------------------\n";
			cout << "Press 1 For Insert\n";
			cout << "Press 2 For Delete\n";
			cout << "Press 3 For Display\n";
			cout << "press 4 for exit\n";
			cout << "--------------------------\n";
			
			cout << "Enter choice : ";
			cin >> choice;
			
			cout << "--------------------------\n";
			
			switch(choice)
			{
				case 1:obj.enqueue();
						break;
				case 2:obj.dequeue();
						break;
				case 3:obj.display();
						break;
				case 4:break;
				
			}
			
			
	}

	
	
	
return 0;	
}
/*
Output

--- Circular Queue & Size Is 5 ---

--------------------------
Press 1 For Insert
Press 2 For Delete
Press 3 For Display
press 4 for exit
--------------------------
Enter choice : 1
--------------------------
Enter Data = 10

--------------------------
Enter choice : 1
--------------------------
Enter Data = 20

--------------------------
Enter choice : 1
--------------------------
Enter Data = 30

--------------------------
Enter choice : 1
--------------------------
Enter Data = 40

--------------------------
Enter choice : 1
--------------------------
Enter Data = 50

--------------------------
Enter choice : 1
--------------------------
-----------------
Queue Is Full
-----------------

--------------------------
Enter choice : 3
--------------------------
10
20
30
40
50

--------------------------
Enter choice : 2
--------------------------
Deleted 10

--------------------------
Enter choice : 3
--------------------------
20
30
40
50

--------------------------
Enter choice : 1
--------------------------
Enter Data = 5

--------------------------
Enter choice : 3
--------------------------
5
20
30
40
50

--------------------------
Enter choice : 2
--------------------------
Deleted 20

--------------------------
Enter choice : 2
--------------------------
Deleted 30

--------------------------
Enter choice : 2
--------------------------
Deleted 40

--------------------------
Enter choice : 2
--------------------------
Deleted 50

--------------------------
Enter choice : 2
--------------------------
Deleted 5

--------------------------
Enter choice : 2
--------------------------
-----------------
Queue Is Empty
-----------------


*/