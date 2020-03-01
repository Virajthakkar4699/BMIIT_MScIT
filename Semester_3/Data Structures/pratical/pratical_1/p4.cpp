#include<iostream>
using namespace std;
class matrix
{
	int **m, row,col;
	
	public:
		
	matrix()
	{
		take_input();
	}
	void take_input();	
	void display_matrix();
};
void matrix::take_input()
{
	int i,j;
	
	cout << "Enter How Many Row Yo Want = ";
	cin >> row;
	cout << "Enter How Many Column You Want = ";
	cin >> col;
	cout << "\n";
	m = new int*[row];
	
	for(i=0;i<row;i++)
	{
		m[i] = new int[col];
		for(j=0;j<col;j++)
		{
			cout << "Matrix [" << i << "][" << j << "] = ";
			cin >> m[i][j];  
		}
	}	
	
	display_matrix();
}
void matrix::display_matrix()
{
	int i,j,odd_element=0,total=0;
	
	cout << "\n";
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout << m[i][j] << "  ";  
		}
		cout << "\n";
	}
		
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(m[i][j]%2==0)
				odd_element++;
		}
		
		cout <<"\n"<< i+1 << "   Row Has  " << odd_element << "  Odd Element.\n\n";
		
		total+=odd_element;
		
		odd_element = 0;
	}	
	
	cout << "Total Odd Element Is = " << total << "\n";
}
int main()
{
	matrix obj;
return 0;	
}