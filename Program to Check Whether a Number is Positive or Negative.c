//C Program to Check Whether a Number is Positive or Negative
#include<stdio.h>
void main()
{
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  if(a>0)
   {
     printf("The number %d is a positive number",a);
    }
   else if(a<0)
    {
       printf("The number %d is a negative number",a);
     }
   else
     printf("The number you entered is zero");

}
