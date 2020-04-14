//C Program to Find the Largest Number Among Three Numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Three Numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d", a>b?(a>c?a:c):(b>c?b:c));
}
