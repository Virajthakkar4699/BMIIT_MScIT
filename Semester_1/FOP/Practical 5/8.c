#include<stdio.h>
void main()
{
	int no,rows,column;
	printf("Enter Value of Grid (NxN)=");
	scanf("%d",&no);
	int counter=0;
	
	for(rows=1;rows<=no;rows++)
	{
		counter=no;
		for(column=1;column<=rows;column++)
		{
			printf("%d",counter--);	
		}
		printf("\n");
	}
}
