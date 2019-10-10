#include<stdio.h>
void main()
{
	char a[20],b[20];
	printf("Enter a string");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("The string is PALINDROME");
	}
	else
	 printf("The entered string is not a PALINDROME");
}
