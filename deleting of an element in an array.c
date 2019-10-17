#include<stdio.h>
void main()
{
	int a[10],x,y,i;
	printf("Enter the no. of array elements");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the index no. you have to delete");
	scanf("%d",&y);
	for(i=y-1;i<x-1;i++)
	{
		  
		a[i]=a[i+1];	
	
	}
	for(i=0;i<x-1;i++)
	{
		printf("%d",a[i]);
	}
}
