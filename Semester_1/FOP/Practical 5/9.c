#include<stdio.h>
void main()
{
	int no,rows,column;
	printf("Enter Value of Grid (NxN)=");
	scanf("%d",&no);
	
	for(rows=1;rows<=no;rows++)
	{
		
		for(column=1;column<=rows;column++)
		{	
			if(column%2==0)
				printf("0");
			else
				printf("1");


		}
		printf("\n");
	}
}


