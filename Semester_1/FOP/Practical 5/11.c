#include<stdio.h>
void main()
{
	int no,rows,column;
	printf("Enter Value of Grid (NxN)=");
	scanf("%d",&no);
	int counter=0;
	
	for(rows=1;rows<=no;rows++)
	{
		counter=65;
		for(column=1;column<=rows;column++)
		{
			printf("%c",counter++);	
		}
		printf("\n");
	}
}
