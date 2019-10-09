//Program to calculate sum of the digits and number of digits
#include<stdio.h>
int main()
{
	int x,total=0,count=0,temp,rem;
	printf("Enter a Number\t");
	scanf("%d",&x);
	temp=x;
	while(x>0)
	{
		rem=x%10;
		total+=rem;
		count++;
		x=x/10;
	}
	printf("%d is the sum of the digit of %d",total,temp);
	printf("\n%d is the number of digits",count);
}
