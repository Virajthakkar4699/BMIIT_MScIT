/*
Write a program With menu driven following operations on stack of positive numbers:
A. Insert element (Push)
B. Remove element (Pop)
C. Display

*/
#include<iostream>
using namespace std;
#define size 5
class Stack
{
	int top , stack[size];
	
	public:

	Stack()
	{
		top = -1;
	}

	void push(int value)	
	{
		if(top>=size-1)
		{
			cout << "Stack Is OverFlow";	
		}
		else
		{
			top = top + 1;
		
			stack[top] = value;
			
		}
	}

	int pop()
	{	
		int item;
			
		if(top==-1)
		{
			cout << "stack is under flow";
		}
		else
		{
			item = stack[top];
			top--;
			return item;	
		}	
	}

	void display()
	{
		int i;
		
		cout << "\n---Your Stack---\n\n";
		
		for(i=top;i>=0;i--)
		{
			cout << stack[i] << "\n";
		}
	}

};
int main()
{
	Stack obj;

	int choice , value;

	char ch = 'y';
	
	cout << "\n--Your Stack Size Is 5--\n\n";	
	
	while(ch=='y')
	{
		cout << "---------------------\n";
		cout << "Press 1 For Push\n";
		cout << "Press 2 For Pop\n";
		cout << "Press 3 For Display\n";
		cout << "---------------------\n";

		cout << "Enter Choice = ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "Enter Value = ";
				cin >> value;
				obj.push(value);
				break;
			case 2:
				value = obj.pop();
				cout << "Deleted Value Is = " << value ;
				break;
			case 3:
				obj.display();
				break;
			default:
				cout << "Enter Right Choice\n";
				break;
				
		}
		cout << "\n******************************\n";
		cout << "DO YOU WANT TO CONTINUE PRESS y = ";
		cin >> ch;
		
	}

	


return 0;
}
/*
Output

--Your Stack Size Is 5--

---------------------
Press 1 For Push
Press 2 For Pop
Press 3 For Display
---------------------

Enter Choice = 1

Enter Value = 10

******************************
DO YOU WANT TO CONTINUE PRESS y = y
---------------------
Press 1 For Push
Press 2 For Pop
Press 3 For Display
---------------------
Enter Choice = 3

---Your Stack---

10

******************************
DO YOU WANT TO CONTINUE PRESS y = y
---------------------
Press 1 For Push
Press 2 For Pop
Press 3 For Display
---------------------
Enter Choice = 2

Deleted Value Is = 10

---After Push 5 value---

Stack Is OverFlow

---After Pop 5 Value---

stack is under flow

*/