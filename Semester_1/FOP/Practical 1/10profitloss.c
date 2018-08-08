#include<stdio.h>
void main()

{
	printf("Proft or Loss");
	int sp;
	int cp;
	printf("enter selling price=\n");
	scanf("%d",sp);

	printf("enter selling price=\n");
	scanf("%d",sp);

	
	int margin=sp-cp;

	
	if(margin<0)
	{
		printf("You Have Made a loss.%d\n",margin);
	}
	else

	{
		printf("You have made a profit%d\n",margin);
	}
}
