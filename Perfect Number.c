//Program to find whether a number is perfect number
#include<stdio.h>
int main()
{
	int x,i,j=0,total=0;
	int a[25];
	printf("Enter a number:\t");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			a[j]=i;
			j++;
			//printf("%d\t",i);//To Print Factors just print the value of i
		}
	}
	for(i=0;i<=j;i++)
	{   
		total+=a[i];
	}
	if(total==x)
	{
		printf("\n%d is a Perfect number",x);
	}
	else
	{
		printf("\n%d is not a Perfect number",x);
	}
}
