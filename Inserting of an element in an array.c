#include<stdio.h>
void main()
{
	int *p,x,a,b,i;
	printf("Enter the no. of elements");
	scanf("%d",&x);
	p=(int*)calloc(x,sizeof(int));
	for(i=0;i<x;i++)
	{
		scanf("%d",(p+i));
	}
	p=(int*)realloc(p,x+1);
	printf("Enter the position no. and value to insert");
	scanf("%d %d",&a,&b);
	a--;
	for(i=x;i>=(a);i--)
	{
		*(p+(i+1))=*(p+i);
	
	}
	//i++;
	*(p+a)=b;
	for(i=0;i<(x+1);i++)
	{
		printf("%d",*(p+i));
	}
	
}
