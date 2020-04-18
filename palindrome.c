/*C program to check whether the given string is palindrome*/
#include<stdio.h>
int main()
{
	char input_string[100];
	int i=0,len,flag=0;
	printf("Enter the string\t");
	gets(input_string);
	len=strlen(input_string)-1;
	while(len>i)
	{
		if(input_string[i++]!=input_string[len--])
		{
			printf("%s is not palindrome",input_string);
			flag=0;
			break;	
		}
		else{	
		flag=1;}
	}
	if(flag==1)	
		printf("%s is palindrome",input_string);
}
