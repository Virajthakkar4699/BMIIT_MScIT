#include<iostream>
#include<cctype>
#include<cstring>


bool check_id(char ID[])
{
	for (int i = 0 ; i < strlen(ID) ; ++i)
	{
		if (!isdigit(ID[i]))
		{
			return false ;
		}
	}
	
	return true ;
}

bool manufacture_name(char name[])
{
	for (int i = 0 ; i < strlen(name) ; ++i)
	{
		if (!isalpha(name[i]))
		{
			return false ;
		}
	}
	
	return true;
}

bool address(char add[])
{
	for (int i = 0 ; i < strlen(add) ; ++i)
	{
		if (ispunc( add[i] ))
		{
			return false ;
		}
	}

	return true ;
}

bool contact_no(char phone_no[])
{
	if (strlen(phone_no) != 10)
	{
		return false ;
	}

	for (int i = 0 ; i < strlen(phone_no) ; ++i)
	{
		if (!isdigit(phone_no[i]))
		{
			return false ;
		}
	}

	return true ;
}
