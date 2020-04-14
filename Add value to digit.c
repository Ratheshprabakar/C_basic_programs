//C program to add specific value to all digits in a number
#include<stdio.h>
void main()
{
	int n,value,index=0,i;
	int number[100];
	printf("Enter a number:\t");
	scanf("%d",&n);
	printf("Enter the value:\t");
	scanf("%d",&value);
	while(n>0)
	{	
		number[index]=(n%10)+value;
		index++;
		n=n/10;
	}
	for(i=index-1;i>=0;i--)
	{
		printf("%d",number[i]);
	}

}
