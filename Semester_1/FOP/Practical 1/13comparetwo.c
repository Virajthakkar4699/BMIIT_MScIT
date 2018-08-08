#include<stdio.h>
void main()
{
  int num1;
  int num2;

  printf("Enter num1=");
  scanf("%d\n", &num1);

  printf("Enter num2=");
  scanf("%d\n", &num2);

  if (num1==num2) {
    printf("Both are equal");
  } else if (num1>num2) {
    printf("Number 1 is Greater");
  } else {
    printf("Number 2 is Greater");
  }
}
