/*A multiplication table is a matrix of order m x n where an entry in the
ith row and the jth column is the product I*j, where i and j are the values
of i and j. show a multiple table respectively.
  3  4  5  6  7
3 9  12 15 18 21
4 12 16 20 24 28
5 15 20 25 30 35
6 18 24 30 36 42
7 21 28 35 42 49
*/
#include<iostream>
using namespace std;
class matrx
{

    int r,c,k,l;

  public:

    void display()
     {
    cout<<"enter row of matrix:";
    cin>>r;
    cout<<"enter column of matrix:";
    cin>>c;
    cout<<"enter number from where to  start mul in row :";
    cin>>k;
    cout<<"enter number from where to  start mul in cols :";
    cin>>l;
     
        int matrix[r][c];
        for(int i=0; i<r; i++)
         {cout<<"\n";
            

            for(int j=0; j<c; j++)
             {    if(i==0&&j==0)
                {
                    cout<<" \t";
                }
                else if(i==0)
                {    matrix[i][j]=k;
                    cout<<"\t"<<matrix[i][j];
                    k++;
                }
                else if(j==0)
                {    matrix[i][j]=l;
                    cout<<"\t"<<matrix[i][j];
                    l++;
                }
                else
                {
                cout<<"\t"<<(matrix[i][0]*matrix[0][j]);
            } }    
    
         }
     }


    

};
int main()
{
    matrx m;
    
    m.display();
    

}

