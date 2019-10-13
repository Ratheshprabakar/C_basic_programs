#include<stdio.h>
void main()
{
        int *a[20],x,i;
    	printf("Enter the no. of elements");
    	scanf("%d",&x);
    	for(i=0;i<x;i++)
    	{   
    	    printf("Enter the %d element :",i+1);
    		scanf("%d",(a+i));
		}
		printf("The Reverse elements are given by\n");
		for(i=x;i>0;i--)
		{
			printf("%d\t",*(a+(i-1)));
		}
}
