//C Program to Calculate the Sum of Natural Numbers
#include<stdio.h>
void main()
{
  int a,i,sum=0;
  printf("Enter the value of N");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
   {
    sum+=i;
    }
   printf("The Sum of %d natural number is %d",a,sum);
}
