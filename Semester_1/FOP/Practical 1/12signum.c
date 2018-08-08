#include<stdio.h>
void main()
{
  int num1;
  printf("Enter num1=");
  scanf("%d", &num1);

  if (num1>0)
   {
    printf("Number is Positive");
  }
  else if (num1<0)
  {
    printf("Number is Negative");
  } else
   {
    printf("Number is zero");
  }
}
