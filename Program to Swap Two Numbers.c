//C Program to Swap Two Numbers
#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter any two numbers\t");
 scanf("%d %d",&a,&b);
 printf("The number before swapping %d %d",a,b);
 c=a;
 a=b;
 b=c;
 printf("\nThe number after swapping %d %d",a,b);
}
