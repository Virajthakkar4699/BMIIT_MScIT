#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  ofstream fout;
  fout.open("student.txt");

  char name[30];

  cout<<"Enter Your Name : ";
  cin>>name;

  fout<<name;

  fout.close();
  return 0;
}
