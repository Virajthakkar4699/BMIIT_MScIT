#include<stdio.h>
void main()
{	
	int n1;
	printf("Enter Ending Criteria=");
	scanf("%d",&n1);
	
	int a=1;
	int val=0;
	
	while(a<=n1)
	{	
		if(a%2==0)
		{
		val=val+a;
		a++;
		}
		else
		{
		a++;
		}
		
	}
		printf("%d\n",val);
}


