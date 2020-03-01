/*
1.Write a menu driven program to implement following functionality with queue using array:
A. Insert element (Enqueue)
B. Remove element (Dequeue)
C. Display the queue

*/
#include<iostream>
using namespace std;
#define size 5
class _queue
{

	int front , rear , data;
	
	int queue[size];
	
	public:
		
		_queue()
		
		{
			front = rear = -1;
		}
		
		void enqueue();
		void dequeue();
		void display();
	
};
void _queue::enqueue()
{
	if(rear==size-1)
	{
		cout << "--------------------------\n";
		cout << "Queue Is Full\n";
		cout << "--------------------------\n";
	}
	else
	{
		if(front == -1 & rear == -1)
		{
			front++;
		}
		rear = rear + 1 ;
		
		cout << "Enter Value = ";
		cin >> data;
		
		queue[rear] = data;
		
	}
}
void _queue::dequeue()
{
	if(front == -1)
	{
		cout << "--------------------------\n";
		cout << "Queue Is Empty\n";
		cout << "--------------------------\n";
	}
	else
	{
		cout << "Deleted " << queue[front] << "\n";
		if(front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front = front + 1;
		}
	
	}
}
void _queue::display()
{
	int i;
	
	for(i=rear;i>=front;i--)
	{
		cout << queue[i] << "\n";
	}
}
int main()
{

	_queue obj;
	
	int choice;
	
	cout << "\n--- Queue Size Is 5 ---\n\n";
	
	while(choice!=4)
	{
			cout << "--------------------------\n";
			cout << "Press 1 For Insert\n";
			cout << "Press 2 For Delete\n";
			cout << "Press 3 For Display\n";
			cout << "press 4 for exit\n";
			cout << "--------------------------\n";
			
			cout << "Enter choice :";
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


--- Queue Size Is 5 ---

--------------------------
Press 1 For Insert
Press 2 For Delete
Press 3 For Display
press 4 for exit
--------------------------
Enter choice :1
--------------------------
Enter Value = 10
--------------------------
Enter choice :1
--------------------------
Enter Value = 20
--------------------------
Enter choice :1
--------------------------
Enter Value = 30
--------------------------
Enter choice :1
--------------------------
Enter Value = 40
--------------------------
Enter choice :1
--------------------------
Enter Value = 50
--------------------------
Enter choice :1
--------------------------
Queue Is Full
--------------------------

Press 1 For Insert
Press 2 For Delete
Press 3 For Display
press 4 for exit
--------------------------
Enter choice :3
--------------------------
50
40
30
20
10
--------------------------
Press 1 For Insert
Press 2 For Delete
Press 3 For Display
press 4 for exit
--------------------------
Enter choice :2
--------------------------
Deleted 10
--------------------------
Enter choice :2
--------------------------
Deleted 20
--------------------------
Enter choice :2
--------------------------
Deleted 30
--------------------------
Enter choice :2
--------------------------
Deleted 40
--------------------------
Enter choice :2
--------------------------
Deleted 50
--------------------------
Enter choice :2
--------------------------
Queue Is Empty
--------------------------

*/