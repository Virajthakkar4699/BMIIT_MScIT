#include<iostream>
using namespace std;
class matrix_operation
{
	int **matrix,**matrix2,row_col,i,j;
	
	public:
		
	matrix_operation()
	{
		set_matrix_value();
	}

	

void set_matrix_value()
{
	cout << "How Many Number Of Row & column you  Want ? = ";
	cin >> row_col;
	
	matrix = new int*[row_col];
	matrix2 = new int*[row_col];
	
	cout << "\n\n***** 1 Matrix *****\n\n";
	
			set_value(matrix);
	
	cout << "\n\n***** 2 Matrix *****\n\n";
	
			set_value(matrix2);
	menu();
	
}
void set_value(int *m[])
{
	for(i=0;i<row_col;i++)
	{
		m[i] = new int[row_col];
		
		for(j=0;j<row_col;j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> m[i][j];
		}
	}		
}
void menu()
{
	string ch;
	
	cout << "**************************************\n";
	cout << "Press 1 For Display Matrix\n";
	cout << "Press 2 For Transpose Matrix\n";
	cout << "Press 3 For Addition Of Matrix\n";
	cout << "Press 4 For Substraction Of Matrix\n";
	cout << "Press 5 For Multiplication Of Matrix\n";
	cout << "**************************************\n";
		
	do
	{
			cout << "Enter Your Choice = ";
			cin >> ch;
			
			if(ch=="1")
				 display_matrix();
			else if(ch=="2")
			   	 transpose_matrix();
			else if(ch=="3")
				 addition_of_matrix();
			else if(ch=="4")
				 subtraction_of_matrix();
			else if(ch=="5")
			     multiplication_of_matrix();
			     
			cout << "Do You Want To Continue Press 'y' = ";
			cin >> ch;
			cout << "\n";							
	}while(ch=="y");
	
}
void display_matrix()
{
	cout << "\n";
	
	cout << "\n***** Matrix 1 *****\n\n";
	
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
	
	cout << "\n***** Matrix 2 *****\n\n";	
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			cout << matrix2[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
}
void transpose_matrix()
{
	cout << "\n***** Transpose Of Matrix *****\n";
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			cout << matrix[j][i] << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
}

void addition_of_matrix()
{
	cout << "\n***** Addition Of Two Matrix *****\n";
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			cout << matrix[i][j]+matrix2[i][j]<< "  ";
		}
		cout << "\n";
	}
	cout << "\n";
}
void subtraction_of_matrix()
{
	cout << "\n***** Substraction Of Two Matrix *****\n";
	for(i=0;i<row_col;i++)
	{
		for(j=0;j<row_col;j++)
		{
			cout << matrix[i][j]-matrix2[i][j]<< "  ";
		}
		cout << "\n";
	}
	cout << "\n";
}
void multiplication_of_matrix()
{
	int k,mul = 0;
	
	cout << "\n***** Multiplication Of Two Matrix *****\n";
	
	for(i=0;i<row_col;i++)
	{
		for(k=0;k<row_col;k++)
		{
				for(j=0;j<row_col;j++)
				{
					mul = mul+matrix[i][j]*matrix2[j][k];
				}
			
			cout << mul << "  ";
			
			mul = 0;
			
		}
		
		cout << "\n";
		
		mul = 0;
	
	}
}
};
int main()
{	
	matrix_operation obj;
	
return 0;	
}