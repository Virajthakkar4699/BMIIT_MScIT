#include<stdio.h>
void main()
{
  int num1;
  int num2;

  printf("Enter num1=");
  scanf("%d", &num1);

  printf("Enter num2=");
  scanf("%d", &num2);

  if (num1==num2) {
    printf("Both Numbers are equal\n" );
  } else {
    printf("Both are unequal\n");
  }
}
