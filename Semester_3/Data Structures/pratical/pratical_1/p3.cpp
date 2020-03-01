

#include<iostream>
using namespace std;
class magic_matrix
{
	int **matrix,row_col,i,j;
	
	public:
			
	magic_matrix()
	{
		set_matrix_value();
	}

void set_matrix_value()
{
	cout << "Enter Number Of Row And Col = ";
	cin >> row_col;
	
	matrix = new int*[row_col];
	
	for(i=0;i<row_col;i++)
	{
		matrix[i] = new int[row_col];
		
		for(j=0;j<row_col;j++)
		{
			cout << "[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	
	display_matrix();
	check_magic_or_not();
	
}
void display_matrix()
{
	cout << "\n\n";
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
}
void check_magic_or_not()
{
	int temp_array[(row_col*2)+2],temp_sum=0,no=0,sum=0;
	
	for(i=0;i<row_col;i++)
	{
		temp_sum += matrix[i][i];
	}
	
	for(i=0;i<row_col;i++)
	{
		for(j=row_col-1;j>=0;j--)
		{
			 sum+=matrix[i][j];
		}
	
		if(sum!=temp_sum)
				 no++;
		
		sum = 0;
	}

	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			 sum+=matrix[i][j];
		}
		
		if(sum!=temp_sum)
				 no++;
		
		sum = 0;
	}
	
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			 sum+=matrix[j][i];
		}
		
		if(sum!=temp_sum)
				 no++;
			 
		sum = 0;	 
	}
	
	if(no!=0)
	{
		cout << "\n*** Matrix Not Magic ***\n";
	}
	else
	{
		cout << "\n*** Matrix Is Magic ***\n";
	}
}
};
int main()
{
	magic_matrix obj;
	
return 0;	
}
/*

Output

Enter Number Of Row And Col = 3
[0][0] = 1
[0][1] = 2
[0][2] = 3
[1][0] = 4
[1][1] = 5
[1][2] = 6
[2][0] = 1
[2][1] = 2
[2][2] = 3


1  2  3
4  5  6
1  2  3


*** Matrix Not Magic ***

*/