#include<iostream>
#include<fstream>
using namespace std;

int main() {
    const int n=80;
    char line[n];
    ifstream fin;
    fin.open("student.txt",ios::in);

    if(!fin)
    {
      cout<<"Cannot oen file !\n";
      return 1;
    }

    while(fin)
    {
      fin.getline(line,n);
      cout<<"\n"<<line;
    }
        fin.close();
        return 0;
}
