#include<iostream>
#include<cstring>
//#include "condition.h"
using namespace std;

int count_sale_h = 1 ;
int employee_count_h = 1;
int employee_count = 1 ;
int customer_count_h = 1 ;
int sale_count =  1 ;
int count_stock_h = 1 ;


struct sales_history
{
	char Company_name[50];
	int model_id,h_price,customer_id,employee_id;
	int cid;
	char status[20];
};

struct stock_history
{
		int stock_mid ;
		char stock_name[50];
		int stock_contact ;
		int stock_modelqty ;
		int stock_amount;
};

struct employye_history
{
		int e_empid ;
		char e_empname[50];
		char e_emp_contact_no[15];
		float e_salary;
		char emp_status[30] ;
};

struct customer_history
{
	int c_custid;
	char c_custname[30];
	char c_cust_contact[12];
	char c_emailid[50];
};

class company
{
		public:
		char name[50];
		string address;
		int contact;
		int mid;
};

class model : virtual public company
{
	public:
		int modelid;
		string modelname;
		int price;
};

class customer
{
	public :
		int custid;
		char custname[30];
		char custadd[75];
		char cust_contact[12];
		char emailid[50];

	void get_customer_details()
	{
			cout << "Enter Customer ID : ";
			cin >> custid;

			cout << "Enter Customer Name : ";
			cin >> custname ;

			cout << "Enter Customer Address : ";
			cin >> custadd ;

			cout << "Enter Customer Contact Number : ";
			cin >> cust_contact;

			cout << "Enter Custome Email ID : ";
			cin >> emailid ;
	}

	void show_customer_details()
	{
			cout << "Customer Name : " << custname << endl;
			cout << "Customer Address : " << custadd << endl;
			cout << "Customer Contact Number : " << cust_contact << endl;
			cout << "Customer Email ID : " << emailid << endl;
	}
};


class employee
{
		public :

		int empid;
		char empname[50];
		char emp_contact_no[15];
		char emp_address[75];
		char emp_password[20] ;
		float salary;

			void assign_emp_history(struct employye_history &e)
			{
					e.e_empid = empid ;
					strcpy(e.e_empname,empname);
					strcpy(e.e_emp_contact_no,emp_contact_no);
					e.e_salary = salary ;
			}

		employee operator = (employee &e1)
		{
			employee e ;

			e.empid = e1.empid ;
			strcpy(e.empname, e1.empname) ;
			strcpy(e.emp_contact_no,e1.emp_contact_no) ;
			strcpy(e.emp_address,e1.emp_address);
			strcpy(e.emp_password,e1.emp_password) ;
			e.salary = e1.salary;

			return e;
		}

		employee()
		{

			strcpy(empname,"Unknown");
			strcpy(emp_contact_no,"Unknown");
			strcpy(emp_address,"Unknown");
			strcpy(emp_password,"Company");
		}

		void get_emp_details()
		{
			cout << "Enter Employee ID : ";
			cin >> empid ;

			cout << "Enter Employee Name : ";
			cin >> empname;

			cout << "Enter Employee Contact Number : ";
			cin >> emp_contact_no ;

			cout << "Enter Employee Address : ";
			cin >> emp_address ;

			cout << "Your By Default Password is 'Company' !! " << endl;

		}

		void set_emp_password()
		{
			char older_password[20];
			int choice ;
			reset_point : 	cout << "Enter Your Older Password : ";
					cin >> older_password ;

			for (int i = 0 ; i < strlen(older_password) ; ++i)
			{
				if (older_password[i] != emp_password[i])
				{
					cout << "Invalid Password!!!" << endl << endl;

					cout << "Press 1 to Reset the Value." << endl ;
					cout << "Press 0 to Exit the Password Reset Criteria." << endl << endl;

					cout << "Enter Your Choice : " ;
					cin >> choice ;

				switch (choice)
					{
						case 1 :
								goto reset_point ;
								break;

						case 2 :
								break;

					}
				}
				else
				{
					strcpy(emp_password , older_password);
					strcpy(older_password,"Unknown");
				}
			}
		}

		void show_employee_details()
		{
				cout << "Employee Name : " << empname << endl;
				cout << "Employee Contact Number : " << emp_contact_no << endl;
				cout << "Employee Address : " << emp_address << endl;

		}
};


class stock :virtual public model
{
	public :

		int modelqty;
		int  stockid ;
		string stock_part;
		float part_price ;
		int qty;

	public:

		void assign_history_stock(struct stock_history *s)
		{
			s->stock_mid = mid;
			strcpy(s->stock_name,name);
			s->stock_contact = contact ;
			s->stock_modelqty = modelqty;
			s->stock_amount = price ;
		}
		void purchase_stock()
		{
			cout<<"Enter Company ID: ";
			cin>>mid;

			cout<<"Enter Company Name:";
			cin>>name;

			cout<<"Enter Company Address:";
			cin>>address;

			cout<<"Enter Contact Number:";
			cin>>contact;

			cout<<"Enter Model ID:";
			cin>>modelid;

			cout << "Enter Model Price : ";
			cin >> price ;

			cout<<"Enter Model Name:";
			cin>>modelname;

			cout << "Enter Quantity : ";
			cin >> modelqty;

			cout << "Enter Stock ID : ";
			cin >> stockid;
		}


		void display_stock()
		{
				cout << "Company ID : " << mid << endl;
				cout << "Company Name : " << name << endl;
				cout << "Company Contact Number : " << contact << endl;
				cout << "Model ID : " << modelid << endl;
				cout << "Model Name : " << modelname << endl;
				cout << "Model Price : " << price << endl;
				cout << "Quantity : " << modelqty << endl;
				cout << " Stock ID : " << stockid << endl;
		}

};

class sales : public customer , virtual public stock , public employee
{
	protected :

		int salesid;
		int custid;
		int amount;

	public:

		void get_sales_details()
		{
				get_customer_details();
		}

		void assign_history_sales(struct sales_history *s)
		{
				strcpy(s->Company_name,name);
				s->cid = mid ;
				s->model_id =  modelid;
				s->h_price = price;
				s->customer_id = custid;
				s->employee_id = empid;
		}

		void assign(stock &s)
		{
				strcpy(name, s.name) ;
				mid = s.mid;
				address = s.address ;
				modelid = s.modelid;
				price = s.price;
		}


		void show_details()
		{
			cout << "Company Name : " << name << endl;
			cout << "Company Address : " << address << endl;
			cout << "Company Contact Number : " << contact << endl;
			cout << "Model Number : " << modelid << endl;
			cout << "Model Name : " << modelname << endl;
			cout << "Price : " << price << endl;
		}

};

class service : public sales
{
	protected :

		int service_id ;
		int customer_id ;

	public :

	 		get_service_details()
			{
					cout << "Enter Service ID : ";
					cin >> service_id ;

					cout << "Enter Customer ID : ";
					cin >> customer_id;
			}
};

int main()
{
	int choice , i = 0, j  ;
	int stock_count = 0 ;
	class stock st[stock_count];
	class sales sale[sale_count];
	class employee emp[employee_count];


	struct sales_history s[count_sale_h];
	struct stock_history stock_h[count_stock_h];
	struct employye_history e[employee_count_h];
	struct customer_history c[customer_count_h];

	while ( 1 )
	{
			cout << "Press 1 to Sell a Car." << endl;
			cout << "Press 2 to Purchase a Car." << endl;
		/*	cout << "Press 3 to Sell a Part." << endl;
			cout << "Press 4 to Purchase a Part." << endl; */
			cout << "Press 5 to Show details." << endl;
			cout << "Press 6 to Add a new Employee." << endl;
			cout << "Press 7 to Delete a Employee." << endl;
			cout << "Press 8 to show the History of Sales." << endl;
			cout << "Press 0 to exit the Application." << endl;

			cout << "Enter Your Choice : " ;
			cin >> choice ;

			switch( choice )
			{
					case 1 :

							if (stock_count == 0 )
							{
								cout << "Sorry there is No stock available.\n\n" << endl;
								break;
							}

							int ref_car_id;
							cout << "Enter What Model you want to Purchase : ";
							cin >> ref_car_id;

							for (i = 0 ; i < stock_count ; ++i)
							{
									if (ref_car_id == st[i].modelid)
									{
											if (st[i].modelqty == 0 )
											{
													cout << "Sorry No more Car Available." << endl << endl;
													goto case_1_end;
											}
											sale[sale_count].assign(st[i]);
											sale[sale_count].get_sales_details();

											st[i].modelqty-- ;

											sale[sale_count].assign_history_sales(&s[count_sale_h]);
											strcpy(s[count_sale_h].status,"Sold");
											count_sale_h++;

											sale_count++ ;
											break;
									}
							}

							case_1_end : break;

					case 2 :
							stock_count++;
							count_stock_h++;
							st[stock_count].purchase_stock();
							cout << "Purchase Successfull";
							st[stock_count].assign_history_stock(& stock_h[count_stock_h]);
							strcpy(s[count_sale_h].status,"Purchased");
							break ;

					case 3 :

							int ref_stockid ;

							cout << "Enter Stock ID to Purchase a stock : ";
							cin >> ref_stockid ;

							for (i = 0 ; i < stock_count ; ++i)
							{
								if (ref_stockid == st[i].stockid)
								{

								}
							}

							break;

					case 4 :

						stock_count++;
						st[stock_count].purchase_stock();
						cout << "Purchase Successfull";
						break ;

					case 5 :

						cout << "Press 1 to show the detail of Employee." << endl;
						cout << "Press 2 to show the list of Employee Working in Company." << endl;
						cout << "Press 3 to show the detail of Customer." << endl;
						cout << "Press 4 to show the list of Customer." << endl;
						cout << "Press 0 to go back in Main Menu." << endl;

					take_choice : 	cout << "Enter Your Choice : ";
						cin >> choice ;


						switch( choice )
						{

								case 1 :

								if (employee_count_h == 0 )
								{
										cout << "No more Employees\n\n" << endl;
										break;
								}


										int r_emp_id ;

										cout << "Enter Employee ID : " ;
										cin >> r_emp_id ;

										for (i = 0 ; i < employee_count_h ; ++i)
										{
											if (e[i].e_empid == r_emp_id)
											{
												cout << "Employee ID : " << e[i].e_empid << endl;
												cout << "Employee Name : " << e[i].e_empname << endl;
												cout << "Employee Contact Number : " << e[i].e_emp_contact_no << endl;
												cout << "Employee Salary : " << e[i].e_salary << endl << endl;
											}
											goto case1_end;
										}

										cout << "Sorry No such Employee with Employee id " << r_emp_id << " Exists\n\n\n" << endl;
										case1_end : break;

								case 2 :

									if (employee_count_h == 0 )
									{
											cout << "No more Employees\n\n" << endl;
											break;
									}

									for (i = 0 ; i < employee_count_h ; ++i)
									{
											cout << "Employee ID : " << e[i].e_empid << endl;
											cout << "Employee Name : " << e[i].e_empname << endl;
											cout << "Employee Contact Number : " << e[i].e_emp_contact_no << endl;
											cout << "Employee Salary : " << e[i].e_salary << endl << endl;
									}

											break;
								case 3 :
										if (customer_count_h == 0)
										{
												cout << "There are no more Customer Available Right Now.\n\n\n" << endl;
												break;
										}

										int ref_custid ;

										cout << "Enter Customer ID : " ;
										cin >> ref_custid ;

										for (i = 0 ; i < customer_count_h ; ++i)
										{
												if (ref_custid == c[i].c_custid)
												{
													cout << "Customer ID : " << c[i].c_custid << endl;
													cout << "Customer Name : " << c[i].c_custname << endl;
													cout << "Customer Contact Number : " << c[i].c_cust_contact << endl;
													cout << "Customer Email ID : " << c[i].c_emailid << endl << endl<< endl;
												}
												goto case3_end;
										}

										cout << "Sorry No Customer with Customer ID " << ref_custid << " Exists.\n\n" << endl;
										case3_end : break;
								case 4 :

									if (customer_count_h == 0)
									{
											cout << "There are no more Customer Available Right Now.\n\n\n" << endl;
											goto case_4_end;
									}

									for (i = 0 ; i < customer_count_h ; ++i)
									{
											cout << "Customer ID : " << c[i].c_custid << endl;
											cout << "Customer Name : " << c[i].c_custname << endl;
											cout << "Customer Contact Number : " << c[i].c_cust_contact << endl;
											cout << "Customer Email ID : " << c[i].c_emailid << endl << endl<< endl;
									}
									case_4_end : 	break;
								case 0 :
										break;

								default :

										cout << "Invalid Choice!!!" << endl;
										goto take_choice;
										break;
							}

					case 6 :

								emp[employee_count].get_emp_details();
								emp[employee_count].assign_emp_history(e[employee_count_h]);
								strcpy(e[employee_count_h].emp_status,"Added");

								employee_count++;
								employee_count_h++;
								break;

					case 7 :

								if (employee_count == 0)
								{
										cout << "Sorry No there are no Employee to Delete.\n\n" << endl;
										break;
								}

								int ref_emp_id;

								cout << "Enter Employee id to Remove that Employee : ";
								cin >> ref_emp_id ;

								for (i = 0 ; i < employee_count ; ++i)
								{
										if (ref_emp_id == emp[i].empid)
										{
												for (j = i ; j < employee_count -1 ; ++j )
												{
														emp[j] = emp[j+1];
												}
										}
								}
								employee_count--;
								break;
			}

		}
	return 0;
}
