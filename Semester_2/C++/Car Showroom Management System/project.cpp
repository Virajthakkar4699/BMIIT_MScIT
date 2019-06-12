#include<iostream>
#include<cstring>
#include<stdlib.h>
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
	int stock_modelid;
	string stock_modelname;
	int stock_modelprice ;
	int stock_modelqty ;
	int stock_id;
	char status[50];
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
		int company_id;
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
			e.salary = e1.salary;

			return e;
		}

		void exchange_value(employee &e ,employee &e1)
		{
			e.empid = e1.empid ;
			strcpy(e.empname, e1.empname) ;
			strcpy(e.emp_contact_no,e1.emp_contact_no) ;
			strcpy(e.emp_address,e1.emp_address);
			e.salary = e1.salary;

		}

		employee()
		{

			strcpy(empname,"Unknown");
			strcpy(emp_contact_no,"Unknown");
			strcpy(emp_address,"Unknown");
		}

		void get_emp_details()
		{
			cout << "\n\n\t\tEnter Employee ID : ";
			cin >> empid ;

			cout << "\t\tEnter Employee Name : ";
			cin >> empname;

			cout << "\t\tEnter Employee Contact Number : ";
			cin >> emp_contact_no ;

			cout << "\t\tEnter Employee Address : ";
			cin >> emp_address ;

			cout << "\t\tEnter Employee Salary : ";
			cin >> salary ;

		}

		void show_employee_details()
		{
				cout << "\n\n\t\tEmployee Name : " << empname << endl;
				cout << "\t\tEmployee Contact Number : " << emp_contact_no << endl;
				cout << "\t\tEmployee Address : " << emp_address << endl;

		}
};


class stock :virtual public model
{
	public :

	int mid;
	int  modelid ;
	string modelname;
	float modelprice ;
	int modelqty;
	int stockid;


	public:

				void assign_history_stock(struct stock_history &s)
				{
					s.stock_mid = mid; //Manufacture Id
					s.stock_modelname = modelname;
					s.stock_modelprice = modelprice ;
					s.stock_modelqty = modelqty;
					s.stock_id = stockid ;
				}
				void purchase_stock()
				{
					cout<<"Enter Company ID: ";
					cin>>mid;//Manufacture Id

					cout<<"Enter Model ID:";
					cin >> modelid;

					cout<<"Enter Model Name:";
					cin>>modelname;

					cout << "Enter Model Price : ";
					cin >> modelprice ;

					cout << "Enter Quantity : ";
					cin >> modelqty;

					cout << "Enter Stock ID : ";
					cin >> stockid;
				}

		void display_stock()
		{
				cout << "Company ID : " << company_id << endl;
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
				s->cid = company_id ;
				s->model_id =  modelid;
				s->h_price = price;
				s->customer_id = custid;
				s->employee_id = empid;
		}

		void assign(stock &s)
		{
				strcpy(name, s.name) ;
				company_id = s.company_id;
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
			begin_point : cout << "\n\n\t\tPress 1 to Sell a Car." << endl;
			cout << "\t\tPress 2 to Purchase a Car." << endl;
			cout << "\t\tPress 3 to Show details." << endl;
			cout << "\t\tPress 4 to Add a new Employee." << endl;
			cout << "\t\tPress 5 to Delete a Employee." << endl;
			cout << "\t\tPress 6 to show the History of Sales." << endl;
			cout << "\t\tPress 0 to exit the Application." << endl;

			cout << "\n\nEnter Your Choice : " ;
			cin >> choice ;

			switch( choice )
			{
					case 1 :

							if (stock_count == 0 )
							{
								system("cls");
								cout << "\n\n\t\tSorry there is No stock available.\n\n" << endl;
								break;
							}

							int ref_car_id;
							cout << "\n\n\t\tEnter What Model you want to Purchase : ";
							cin >> ref_car_id;


							for (i = 0 ; i < stock_count ; ++i)
							{
									if (ref_car_id == st[i].modelid)
									{
											cout << "Hello World";
											if (st[i].modelqty == 0 )
											{
													system("cls");
													cout << "\n\n\t\tSorry No more Car Available." << endl << endl;
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
									cout << "Purchase Successfull"<<endl;
									st[stock_count].assign_history_stock(stock_h[count_stock_h]);
									strcpy(stock_h[count_sale_h].status, "Purchased");
									//cout<< "Purchased "<<endl; for test purpose
									//cout<<stock_h[count_stock_h].stock_mid; for test purpose
									break ;


					case 3 :
							system("cls");

						cout << "\n\n\t\tPress 1 to show the detail of Employee." << endl;
						cout << "\t\tPress 2 to show the list of Employee Working in Company." << endl;
						cout << "\t\tPress 3 to show the detail of Customer." << endl;
						cout << "\t\tPress 4 to show the list of Customer." << endl;
						cout << "\t\tPress 0 to go back in Main Menu." << endl;

					take_choice : 	cout << "\n\n\tEnter Your Choice : ";
						cin >> choice ;


						switch( choice )
						{

								case 1 :

								if (employee_count == 1 )
								{		system("cls");
										cout << "\n\n\t\tNo more Employees\n\n" << endl;
										break;
										goto case_1_end;
								}
										int r_emp_id ;

										cout << "Enter Employee ID : " ;
										cin >> r_emp_id ;

										system("cls");

										for (i = 1 ; i < employee_count ; ++i)
										{
											if (emp[i].empid == r_emp_id)
											{
												cout << "\n\n\t\tEmployee ID : " << emp[i].empid << endl;
												cout << "\t\tEmployee Name : " << emp[i].empname << endl;
												cout << "\t\tEmployee Contact Number : " << emp[i].emp_contact_no << endl;
												cout << "\t\tEmployee Salary : " << emp[i].salary << endl << endl;
												goto case1_end;
											}
										}

										cout << "\n\n\t\tSorry No such Employee with Employee id " << r_emp_id << " Exists\n\n\n" << endl;
										goto begin_point;
										case1_end : break;

								case 2 :

									if (employee_count_h == 1 )
									{
											system("cls");
											cout << "\n\n\t\tNo more Employees\n\n" << endl;
											break;
											goto case2_end;
									}

									system("cls");

									for (i = 1 ; i < employee_count ; ++i)
									{
												emp[i].show_employee_details();
									}

										goto begin_point;

											case2_end : break;

								case 3 :
										if (customer_count_h == 1)
										{
												system("cls");
												cout << "\n\n\t\tThere are no more Customer Available Right Now.\n\n\n" << endl;
												break;
												goto case3_end ;
										}

										int ref_custid ;

										cout << "Enter Customer ID : " ;
										cin >> ref_custid ;

										for (i = 1 ; i < customer_count_h ; ++i)
										{
												system("cls");
												if (ref_custid == c[i].c_custid)
												{
													cout << "\n\n\t\tCustomer ID : " << c[i].c_custid << endl;
													cout << "\t\tCustomer Name : " << c[i].c_custname << endl;
													cout << "\t\tCustomer Contact Number : " << c[i].c_cust_contact << endl;
													cout << "\t\tCustomer Email ID : " << c[i].c_emailid << endl << endl<< endl;
												}
												goto case3_end;
										}

										cout << "Sorry No Customer with Customer ID " << ref_custid << " Exists.\n\n" << endl;
										case3_end : break;
								case 4 :

									if (customer_count_h == 1)
									{
											system("cls");
											cout << "\n\n\t\tThere are no more Customer Available Right Now.\n\n\n" << endl;
											goto case_4_end;
									}

									for (i = 1 ; i < customer_count_h ; ++i)
									{
											cout << "\n\n\t\tCustomer ID : " << c[i].c_custid << endl;
											cout << "\t\tCustomer Name : " << c[i].c_custname << endl;
											cout << "\t\tCustomer Contact Number : " << c[i].c_cust_contact << endl;
											cout << "\t\tCustomer Email ID : " << c[i].c_emailid << endl << endl<< endl;

									}
									case_4_end : 	break;
								case 0 :
										break;

								default :

										cout << "\n\n\t\tInvalid Choice!!!" << endl;
										goto take_choice;
										break;


							}

							goto begin_point;


					case 4 :
								system("cls");
								emp[employee_count].get_emp_details();
								emp[employee_count].assign_emp_history(e[employee_count_h]);
								strcpy(e[employee_count_h].emp_status,"Added");

								employee_count++;
								employee_count_h++;
								break;

					case 5 :

								if (employee_count == 1)
								{
										cout << "Sorry No there are no Employee to Delete.\n\n" << endl;
										break;
								}

								int ref_emp_id;

								cout << "Enter Employee id to Remove that Employee : ";
								cin >> ref_emp_id ;

								for (i = 1 ; i < employee_count ; ++i)
								{
										if (ref_emp_id == emp[i].empid)
										{
												employee_count_h++;
											emp[i].assign_emp_history(e[employee_count_h]);
											strcpy(e[employee_count_h].emp_status,"Removed");

												for (j = i ; j < employee_count - 1 ; ++j )
												{
														emp[j].exchange_value(emp[j],emp[j+1]);
												}

												if (employee_count != 1)
												{
													employee_count--;
												}

												cout << "Employee Has been Removed." << endl;

												goto case_5_end;
										 }
								}
								cout << "Sorry No such Employee Exists with Employee ID " << ref_emp_id << endl;
							case_5_end	: break;


								case 6 :

										cout << "Press 1 to show the history of Sales." << endl;
										cout << "Press 2 to show the history of Employees." << endl;
										cout << "Press 3 to show the history of Customer." << endl;
										cout << "Press 4 to show the history of Stock." << endl;
										cout << "Press any other key to return to main Menu." << endl;

										cout << "Enter Your Choice : ";
										cin >> choice ;

										switch (choice)
										{
												case 1 :
														if (count_sale_h == 1 )
														{
																cout << "No History to Show.\n" << endl;
																break;
														}

														for ( i = 1 ; i < count_sale_h ; ++i)
														{
																cout << "\n\nCompany Name : " << s[i].Company_name << endl;
																cout << "Model ID : " << s[i].model_id << endl;
																cout << "Model Price : " << s[i].h_price << endl;
																cout << "Customer ID : " << s[i].customer_id << endl;
																cout << "Employee ID : " << s[i].employee_id << endl;
																cout << "Company ID : " << s[i].cid << endl;
																cout << "Sales Status : " << s[i].status << endl;
														}

														break ;

												case 2 :

												if (employee_count_h == 1 )
												{
														cout << "No History to Show.\n" << endl;
														break;
												}

													for (i = 1 ; i < employee_count_h ; ++i)
													{
														cout << "\nEmployee ID : " << e[i].e_empid << endl;
														cout << "Employee Name : " << e[i].e_empname << endl;
														cout << "Employee Contact Number : " << e[i].e_emp_contact_no << endl;
														cout << "Employeee Salary : " << e[i].e_salary << endl;
														cout << "Employee Status : " << e[i].emp_status << endl;
													}
														break;

												case 3 :

												if (customer_count_h == 1 )
												{
														cout << "No History to Show.\n" << endl;
														break;
												}

													for ( i = 1 ; i < customer_count_h ; ++i)
													{
															cout << "Customer ID : " << c[i].c_custid << endl;
															cout << "Customer Name : " << c[i].c_custname << endl;
															cout << "Customer Contact Number : " << c[i].c_cust_contact << endl;
															cout << "Customer Email ID : " << c[i].c_emailid << endl;
													}
													break;

												case 4 :

												if (count_stock_h == 1 )
												{
														cout << "No History to Show.\n" << endl;
														break;
												}

													for ( i = 1 ; i < count_stock_h ; ++i)
													{
														cout << "Company Id : " << stock_h[i].stock_mid <<  endl;
														//cout << "Company Name : " << stock_h[i].stock_name << endl;
														cout << "Model ID : " << stock_h[i].stock_modelid << endl;
														cout << "Model Name : " << stock_h[i].stock_modelname << endl;
														cout << "Model Price : " << stock_h[i].stock_modelprice << endl;
														cout << "Model Qty : " << stock_h[i].stock_modelqty << endl;
														cout << "Stock ID : " << stock_h[i].stock_id << endl;

														/*
														int stock_mid ;
														int stock_modelid;
														string stock_modelname;
														int stock_modelprice ;
														int stock_modelqty ;
														int stock_id;
														char status[50];
														*/
													}
													break ;

												case 0 :

													break ;

													default :
																cout << "Invalid Choice!!!\n\n" << endl;

										}
			}

		}
	return 0;
}
