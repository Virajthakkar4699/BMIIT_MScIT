#include <iostream>

using namespace std ;
int main()
{	
     int row , col ;
	 
	 
	 
     cout << "Enter the Number of Rows  : ";
     cin >> row ;

     cout << "Enter the Number of Column : ";
     cin >> col ;

     int array[row][col];
     int odd[row] = {0} ,sum=0;

     for (int i = 0 ; i < row ; ++i)
     {
          for (int j = 0 ; j < col ; ++j)
          {
               cout << "Enter the Element at array["<<i+1<<"] ["<<j+1 <<"] : ";
               cin >> array[i][j];
          }
     }
	

	int i,j,odd_element=0,total=0;
	
	cout << "\n";
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout << array[i][j] << "  ";  
		}
		cout << "\n";
	}

		

     for (int i = 0 ; i < row ; ++i)
     {
          for (int j = 0 ; j < col ; ++j)
          {
                    if (array[i][j]%2 != 0)
                    {
                              odd[i]++;
                    }
          }
     }

     for (int i = 0 ; i < row ; ++i)
     {
               cout << i+1 << " Row has " << odd[i] << " Odd elements."<< endl;
               sum = sum + odd[i];
     }

     cout << "Total Number of Odd Element : " << sum << endl;

     return 0;
}