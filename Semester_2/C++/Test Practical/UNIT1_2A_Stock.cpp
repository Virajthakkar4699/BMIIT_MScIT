#include<iostream>
using namespace std;

class stock
{
  int icode,qty;
  char item[20];
  float price,discount;
  int finddisc(int qty)
  {
    if (qty<=50)
      discount=0;
    else if (qty>50 && qty<=100)
      discount=5;
    else if(qty<=100)
      discount=10;
      else
        cout<<"please enter valid number";

        return discount;
  }

public:
  void buy()
  {
    cout<<"Insert Value :"<<endl;
    cin>>icode>>item>>price>>qty;
    discount=finddisc(qty);
  }
  void showall() {
    cout<<"Printing Details"<<endl;
    cout<<icode<<"\n"<<item<<"\n"<<price<<"\n"<<qty<<"\n"<<discount;
  }
};

int main() {

stock s1;
s1.buy();
s1.showall();

  return 0;
}
