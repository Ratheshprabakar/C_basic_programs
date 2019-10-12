//Program to find whether the two numbers are co-prime or not
//Two numbers are said to be co-prime if they do not have any common divisor other than one
#include<stdio.h>
int main()
{
	int x,y,j,k,c,flag=0,i,m;
	int a[25],b[25];
	printf("Enter Two numbers:\t");
	scanf("%d\t%d",&x,&y);
	j=0;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			a[j]=i;
			j++;
			//printf("%d\t",i);//To Print Factors just print the value of i
		}
	}
	k=0;
	for(i=1;i<y;i++)
	{
		if(y%i==0)
		{
			b[k]=i;
			k++;
			//printf("%d\t",i);
		}
	}
	if(k>=j)
	{
		m=k;
	}
	else
	{
		m=j;
	}
	for(i=1;i>m;i++)
	{
		if(a[i]==b[i])
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("%d and %d is not a co-prime number",x,y);
	}
	else
	{
		printf("%d and %d is a co-prime number",x,y);
	}
}
