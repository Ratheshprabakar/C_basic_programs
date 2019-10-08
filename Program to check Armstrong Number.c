//C program to check whether the number is armstrong or not
#include<stdio.h>
int main()
{
	int a,rem,count=0,temp,x,total=0;
	printf("Enter a Number");
	scanf("%d",&a);
	temp=a;
	x=a;
	while(a>0)
	{
		rem=a%10;
		a=a/10;
		count++;
		//total=total+pow
	}
	while(x>0)
	{
		rem=x%10;
		total=total+pow(rem,count);
		x=x/10;
		}
	if(total==temp)
	{
		printf("%d is An Armstrong Number",temp);
		}
	else
	{
		printf("%d is not an Armstrong Number",temp);
		}	
}

