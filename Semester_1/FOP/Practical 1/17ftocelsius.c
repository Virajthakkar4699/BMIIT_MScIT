#include<stdio.h>
void main()
{
  float f;
  printf("Enter Temperature in farenheit=");
  scanf("%f\n", &f);

  float celsius=((f-32)*5/9);
  printf("%f\n", celsius);
}
