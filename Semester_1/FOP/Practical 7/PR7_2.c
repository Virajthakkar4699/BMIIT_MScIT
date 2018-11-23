#include<stdio.h>
void main()
{
	char array1[]="sgfhjgfhsgfsdghfjsgfjsggfskdjfh";
	printf("Enter String\n");
	gets(array1);
	int index=0;
	int counter=0;
	while(array1[index]!='\0')
	{
		if(array1[index]==" ");		
		{counter++;}
		index++;
	}
	
	printf("%d\n",counter+1);				
}
