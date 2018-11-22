#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="VIRAJ";
	char str2[]="VIRAJ";
	
	int i=strcmp(str1,str2);
	printf("%d\n",i);
	
	//printf(strcat(str1,str2));
	puts(strupr(str1));
}
