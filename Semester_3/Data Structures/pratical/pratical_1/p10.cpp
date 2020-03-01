#include<iostream>
using namespace std; 
int main()
{
 int num,r,c,sp;
 cout<<"Enter number of rows :" ;
 cin>>num;
 
 for(r=1; r<=num; r++)
 {
   for(sp=num-r; sp>=1; sp--)
   
   {
       cout<<" ";
	}
   for(c=1; c<=r; c++)
   {
      cout<<c;
	}
   for(c=r-1; c>=1; c--)
   {
       cout<<c;
	 }
   cout<<endl;
 }
 for(r=1; r<=num; r++)
 {
   for(sp=r; sp>=1; sp--)
   {
      cout<<" ";
	}
   for(c=1; c<=(num-r); c++)
   {
       cout<<c;
	}
   for(c=num-r-1; c>=1; c--)
   {
   	cout<<c;
   }
       
  cout<<endl;
 }
 
 return 0;
}