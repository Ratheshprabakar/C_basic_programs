//C Program to Check Leap Year
#include<stdio.h>
void main()
{
  int a;
  printf("Enter a year");
  scanf("%d",&a);
  if(a%4==0)
   {
     printf("The year %d is leap year",a);
    }
   else
     printf("The year %d is not a leap year",a);
}
