#include<stdio.h>
int main()
{	
	int opr1;
	printf("Enter Operand 1=");
	scanf("%d",&opr1);
	
	int opr2;
	printf("Enter Operand 2=");
	scanf("%d",&opr2);

	printf("Please Select from menu\n");
	printf("============================\n");	
	printf("Use + for Addition\n"); //ascii-43
	printf("Use - for Subtraction\n");//ascii-45
	printf("Use * for Multiplication\n");// ascii-42
	printf("Use / for Division\n");	//ascii-47
	printf("============================\n");
	printf("Enter Your Choice\n");
	char ch;
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
		printf("ADD=%d",(opr1+opr2));
		break;
	
		case '-':
		printf("SUB=%d",(opr1-opr2));
		break;

		case '*':
		printf("MUL=%d",(opr1*opr2));
		break;

		case '/':
		printf("DIV=%d",(opr1/opr2));
		break;

		default: printf("eRROr-->Enter Valid Choice");
	}
	
}
