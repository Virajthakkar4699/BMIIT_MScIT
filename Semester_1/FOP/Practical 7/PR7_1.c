#include<stdio.h>
void main()
{
	char array1[]=" ";
	printf("Enter String");
	gets(array1);
	int index=0;
	int counter=0;
	while(array1[index]!='\0')
	{
		counter++;
		index++;
	}
	
	printf("%d\n",counter);				
}
