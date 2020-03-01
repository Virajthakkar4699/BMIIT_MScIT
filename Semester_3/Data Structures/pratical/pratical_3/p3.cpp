
/*3. Write a program to enter your name in stack and display it in reverse order using push and pop operations.
[Note: Implement stack using array.]*/
#include<iostream>

using namespace std;
class string_stack
{
	string stack;	
	int top ;

	public:
	string_stack()
	{
		top=0;
		menu();
	}
	void menu();
	void push();
	void pop();
	void display();
};
void string_stack::menu()
{
	string ch;
	while(1)	
	{
		cout << "\n-------------------------------------------\n";
		cout << "Press 1 For Push Character Of Your Name\n";
		cout << "Press 2 For Pop Character From Your Name\n";
		cout << "Press 3 For Display Your Name In Reverse Order\n";
		cout << "Press 4 For Exit\n";
		cout << "-------------------------------------------\n";
		cout << "Enter Choice = ";
		cin >> ch;
	
		if(ch=="1")
			push();
		else if(ch=="2")
			pop();
		else if(ch=="3")
			display();
		else if(ch=="4")
			goto end;
		else 
			cout << "\n--Enter Right Choice--\n";
	}
end:
	
	cout << "\n--Thank You--\n\n";	
}
void string_stack::push()
{
	string ch="y";

	while(ch=="y")	
	{
		cin >> stack[top];
		top++;

		cout << "DO YOU WANT CONTINUE PUSH CHAR PRESS y = ";
		cin >> ch;
	}
}
void string_stack::pop()
{
	
	string ch="y";

	while(ch=="y")	
	{
		if(top==0)
		{
			cout << "\n--Stack Is Under Flow--\n\n";
			goto out;
		}
		else
		{
				cout << "\n---Pop Character Is = " << stack[top-1] << "---\n";
				top--;
			
				cout << "DO YOU WANT CONTINUE POP CHAR PRESS y = ";
				cin >> ch;
		}
	
	}
	
out:
cout << "\n";
}
void string_stack::display()
{
	int i;
	
	cout << "\n********Your Name*********\n";
	for(i=top-1;i>=0;i--)
	{
		cout << stack[i];
	}
	cout << "\n*****************\n";
}
int main()
{
	string_stack obj;

}
/*
Output

-------------------------------------------
Press 1 For Push Character Of Your Name
Press 2 For Pop Character From Your Name
Press 3 For Display Your Name In Reverse Order
Press 4 For Exit
-------------------------------------------
Enter Choice = 1

D

DO YOU WANT CONTINUE PUSH CHAR PRESS y = y

E

DO YOU WANT CONTINUE PUSH CHAR PRESS y = y

V

DO YOU WANT CONTINUE PUSH CHAR PRESS y = n

-------------------------------------------
Press 1 For Push Character Of Your Name
Press 2 For Pop Character From Your Name
Press 3 For Display Your Name In Reverse Order
Press 4 For Exit
-------------------------------------------
Enter Choice = 3

********Your Name*********

VED

*****************


-------------------------------------------
Press 1 For Push Character Of Your Name
Press 2 For Pop Character From Your Name
Press 3 For Display Your Name In Reverse Order
Press 4 For Exit
-------------------------------------------
Enter Choice = 3

---Pop Character Is = V---

DO YOU WANT CONTINUE POP CHAR PRESS y = y

---Pop Character Is = E---

DO YOU WANT CONTINUE POP CHAR PRESS y = y

---Pop Character Is = D---

DO YOU WANT CONTINUE POP CHAR PRESS y = y

--Stack Is Under Flow--

*/