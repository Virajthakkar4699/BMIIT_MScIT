#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
  ifstream fin;
  ofstream fout;

  fin.open("student.txt");
  fin.open("student.txt",ios::out|ios::app);

  char name[30];

  cout<<"Enter Your name :";
  cin>>name;

  if(fin.is_open())
  {
    fout<<name;
  }
  cout<<"Your Data has been updated!";

  fin.close();
  fout.close();
  return 0;
}
