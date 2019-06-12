#include<iostream>
using namespace std;
class car_model	//base class
{
	char Name[100],add[100];
	long mob,ad_no,lic;

	public:

	void c_model()
	{
		cout<<"Vitara Brezza\n";
		cout<<"Swift Desire\n";
		cout<<"Ignis\n";
		cout<<"Waganor\n";
		cout<<"Baleno\n";
		cout<<"Ertica\n";
	}
	void purchase()
		{
			cout<<"Enter Your Name... :";
			cin>>Name;
			cout<<"Enter Address :";
			cin>>add;
			cout<<"Enter Contact No. :";
			cin>>mob;
			cout<<"Enter Aadhar No. :";
			cin>>ad_no;
			cout<<"Enter License No. :";
			cin>>lic;
			cout<<"Select Payment Mode:\n 1.Cheque\n2.EMI\n3.Cash\n";
		}
};
class P_Car_Model:public car_model	//deriverd class
{
	int ch;
	char color[50];

	public:

		void Petrol_car()
		{
			cout<<"-------------PETROL CAR MODELS-------------\n";
			c_model();
			cout<<"Celerio\n";
			cout<<"Alto\n";
			cout<<"========================================\n";
			cout<<"Press 1. for Vitara Brezza\n";
			cout<<"Press 2. for Swift Desire\n";
			cout<<"Press 3. for Ignis\n";
			cout<<"Press 4. for Waganor\n";
			cout<<"Press 5. for Baleno\n";
			cout<<"Press 6. for Ertica\n";
			cout<<"Press 7. for Celerio\n";
			cout<<"Press 8. for Alto\n";
			cout<<"========================================\n";
			cout<<"Enter your Car no. which you want to buy or show:  \n";
			cin>>ch;
			cout<<"=======================================================\n";

			switch(ch)
			{
				case 1:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Five seater SUV CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";
						cout<<"------------------------------------------\n";

					cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
					cin>>color;
					if(color=="r" || color=="b" || color=="w")
					{
						purchase();
					}
					else
					{
						cout<<"Colour Not Available ....\n";
						cout<<"Reenter colour:\n";
						cin>>color;
					}
					break;
				}
				case 2:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Automatic gear start\n";
						cout<<"Dual Front Airbags\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";
						cout<<"------------------------------------------\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 3:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Five seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";
						cout<<"------------------------------------------\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Re-enter colour:\n";
							cin>>color;
						}
				break;
				}
				case 4:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Five seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";
						cout<<"------------------------------------------\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 5:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Five seater SUV CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 6:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Five seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 7:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Four seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 8:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Four seater CAR\n";
						cout<<"Digital System\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}

};
class D_Car_Model:public car_model	//deriverd class
{
	int ch;
	char color[20];

	public:

		void Diesel_car()
		{
			cout<<"-------------DIESEL CAR MODELS-------------\n";
			cout<<"Vitara Brezza\n";
			cout<<"Swift Desire\n";
			cout<<"Ignis\n";
			cout<<"Waganor\n";
			cout<<"Baleno\n";
			cout<<"Ertica\n";

			cout<<"Press 1. for Vitara Brezza\n";
			cout<<"Press 2. for Swift Desire\n";
			cout<<"Press 3. for Ignis\n";
			cout<<"Press 4. for Waganor\n";
			cout<<"Press 5. for Baleno\n";
			cout<<"Press 6. for Ertica\n";
			cout<<"Enter your Car no. which you want to buy or show:  \n";
			cin>>ch;

			switch(ch)
			{
				case 1:
				{
						cout<<"------------------------------------------\n";
						cout<<"CAR FEATURES\n";
						cout<<"------------------------------------------\n";
						cout<<"Five seater SUV CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";
						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 2:
				{
						cout<<"Automatic gear start\n";
						cout<<"Dual Front Airbags\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 3:
				{
						cout<<"Five seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 4:
				{
						cout<<"Five seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 5:
				{
						cout<<"Five seater SUV CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
				case 6:
				{
						cout<<"Four seater CAR\n";
						cout<<"Reverse parking Camera\n";
						cout<<"Extra Space\n";
						cout<<"Digital System\n";
						cout<<"Auto Gear\n";
						cout<<"Auto Start\n";

						cout<<" :: Select Colour :: \n Red(R)\n Black(B)\n White(W) \n";
						cin>>color;
						if(color=="r" || color=="b" || color=="w")
						{
							purchase();
						}
						else
						{
							cout<<"Colour Not Available ....\n";
							cout<<"Reenter colour:\n";
							cin>>color;
						}
				break;
				}
			}

		}
};
int main()
{
	P_Car_Model p1;
	D_Car_Model d1;
	int ch;
	cout<<"-------------------------------------------------------\n";
	cout<<"----------WELCOME TO MARUTI SUZUKI CAR SHOWROOM--------\n";
	cout<<"-------------------------------------------------------\n";
	cout<<"Press 1 for Petrol Car\n";
	cout<<"Press 2 for Diesel Car\n";
	cout<<"-------------------------------------------------------\n";
	cout<<"Enter your choice\n";
	cin>>ch;
	cout<<"-------------------------------------------------------\n";
	switch(ch)
	{
		case 1:
		{

			p1.Petrol_car();
			break;
		}
		case 2:
		{

			d1.Diesel_car();
			break;
		}
	}
return 0;
}
