//C Program to Find all Roots of a Quadratic Equation
#include<stdio.h>
void main()
{
  int a,b,c,d,e,f;
  printf("Enter the coefficient of x2");
  scanf("%d",&a);
  printf("Enter the coefficient of x");
  scanf("%d",&b);
  printf("Enter the constant term");
  scanf("%d",&c);
  d=(b*b)-(4*a*c);
  e=pow(d,2);
  f=d/(2*a);
  printf("The roots of the quadratic equations are -%d+%d and -%d-%d",b,f,b,f);  

}
