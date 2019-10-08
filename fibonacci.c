#include<stdio.h>
void main()
{
	 int n,x,i;
	 int fact(int n);
	 printf("Enter a number");
	 scanf("%d",&n);
	 printf("The Fibonacci series are ");
	 for(i=0;i<=n;i++)
	 {
	 x=fact(i);
	 printf("\t%d",x);
     }
}
int fact(int n)
{
	if(n==0)
	  return 0;
	else if(n==1)
	  return 1;
	else 
	  return (fact(n-1)+fact(n-2));
}
