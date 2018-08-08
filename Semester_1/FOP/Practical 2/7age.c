#include<stdio.h>
void main()
{
	int age;
	printf("Enter Your Age=\n");
	scanf("%d",&age);
	
	if(age>16 && age<20)
	{printf("You are eligible to give exams\n");}
	else
	{printf("You are not eligible to give exams\n");}
}
