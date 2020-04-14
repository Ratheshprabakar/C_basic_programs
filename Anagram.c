//Program to check whether the two string is anagram or not
/*
  I/P: string1:hello
       string2:elhol
  O/P:Anagram
  I/P:  string1:hello
        string2:elhoa
    O/P: Not a anagram*/

#include<stdio.h>
int main()
{
	char string1[100];
	char string2[100];
	char temp;
	int i,j,flag=1,check=0;
	printf("Enter the first string\t");
	gets(string1);
	printf("\nEnter the second string\t");
	gets(string2);
	if(strlen(string1)==strlen(string2))
	{
		for(j=strlen(string1)-1;j>=0&&flag;j--)
		{
			flag=0;
			for(i=0;i<=j-1;i++)
			{
				if(string1[i]>string1[i+1])
				{
					temp=string1[i];
					string1[i]=string1[i+1];
					string1[i+1]=temp;
					flag=1;
				}
			}
		}	
		for(j=strlen(string2)-1;j>=0&&flag;j--)
		{
			flag=0;
			for(i=0;i<=j-1;i++)
			{
				if(string2[i]>string2[i+1])
				{
					temp=string2[i];
					string2[i]=string2[i+1];
					string2[i+1]=temp;
					flag=1;
				}
			}
		}
		for(i=0;i<strlen(string1);i++)
		{
			if(string1[i]==string2[i])
				check=1;
			else
			{
				check=0;
				printf("Not an Anagram");
				break;	
			}	
		}
		if(check==1)
			printf("Anagram");		
	}
	else
		printf("Not an Anagram");
}
