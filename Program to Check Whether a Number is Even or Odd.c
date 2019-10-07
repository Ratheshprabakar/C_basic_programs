//C Program to Check Whether a Number is Even or Odd
#include<stdio.h>
void main()
{
  int a;
  printf("Enter a number\t");
  scanf("%d",&a);
  if(a%2==0)
  {
     printf("\nThe number %d is even",a);
   }
  else
    printf("\nThe number %d is odd",a);
}
