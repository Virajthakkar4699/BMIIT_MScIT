#include<stdio.h>
void main()
{
	printf("Printing of total time\n");
	printf("\n");

	int HF=0;
	int MF=0;

	printf("Give First hour value=");
	scanf("%d",&HF);
	
	printf("Give First Minute value=");
	scanf("%d",&MF);

	int HT=0;
	int MT=0;

	printf("Give Second hour value=");
	scanf("%d",&HT);
	
	printf("Give Second Minute value=");
	scanf("%d",&MT);
	
	int totalhours=HF+HT;
	int totalminute=MF+MT;
	
	if(totalminute>=60)
	{
		totalhours=totalhours+1;
		totalminute=totalminute-60;
	}
	
	printf("%d:%d\n",totalhours,totalminute);
}
