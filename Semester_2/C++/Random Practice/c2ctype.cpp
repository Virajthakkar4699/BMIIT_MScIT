#include<iostream>
using namespace std;

class item
{
	int code,qty;
	float price;
	public:
	item(int c,float p,int qy)
	{
		code=c;
		price=p;
		qty=qy;	
	}
	void putdata()
	{
		cout<<"\nItem Code :"<<code;
		cout<<"\nItem Price :"<<price;
		cout<<"\nItem Quantity :"<<qty;
	}
	int getcode()
	{
		return code;
	}
	float getprice()
	{
		return price;
	}
	int getqty()
	{
		return qty;
	}
	operator float()
	{
		return price*qty;
	}
};

class item2
{
	int code;
	float stockprice;
	public:
	item2()
	{
		code=0;
		stockprice=0;
	}
	item2(int c,float p)
	{
		code=c;
		stockprice=p;
	}
	void putdata()
	{
		cout<<"\n\nItem Code :"<<code;
		cout<<"\nItem Price :"<<stockprice<<endl;
	}
	item2(item i)
	{
		code=i.getcode();
		stockprice=i.getprice()*i.getqty();
	}
};

int main()
{
	item i1(1,100,5);  
	item2 i2;
	
	
	i2=i1;
	float totalprice=i1;
	i1.putdata();
	
	cout<<"\nTotal Price = "<<totalprice<<endl;
	i2.putdata();
	
	return 0;
}

