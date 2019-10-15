//C Program to Find Factorial of a Number
#include<stdio.h>
void main()
{
  int a,sum=1,i;
  printf("Enter a number");
  scanf("%d",&a);
  for(i=a;i>=1;i--)
   {
     sum=sum*i;
    }
  printf("The Factorial of %d number is %d",a,sum);

}
