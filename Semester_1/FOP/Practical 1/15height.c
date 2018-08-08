#include<stdio.h>
void main()
{
  float height;
  printf("Enter Your Height in Feet and Inches=");
  scanf("%f", &height);

  if (height<3.0)
{
 printf("you are dwarf");
}
   else if (height>3.0 && height<5.0)
   {
    printf("you have a average height");
  }
  else
   {
    printf("you are tall");
    }

}
