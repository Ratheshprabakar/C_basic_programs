#include<stdio.h>
void main()
{
	int a,i;
	printf("Enter the number");
	scanf("%d",&a);
	printf("The factors are \t1");
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("\t%d",i);
		}
	}
	printf("\t%d",a);
}
