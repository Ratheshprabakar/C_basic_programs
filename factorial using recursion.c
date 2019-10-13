#include<stdio.h>
void main()
{
	int a,x;
	int fact(int a);
	printf("Enter the no.");
	scanf("%d",&a);
	x=fact(a);
	printf("The factorial of %d is %d ",a,x);
}
int fact(int a)
{  
	if(a>=1)
	{
		return a*fact(a-1);
	}
	else
	   return 1;
}
