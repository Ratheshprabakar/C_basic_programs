/*C program to swap two strings*/
#include<stdio.h>
int main()
{
	char first_string[100],second_string[100];
	char *temp;
	printf("Enter the first string\n");
	gets(first_string);
	temp=(char *)malloc((strlen(first_string)+1)*sizeof(char));
	printf("Enter the second string\n");
	gets(second_string);	
	printf("\nThe string before swapping\n%s\n%s",first_string,second_string);
	strcpy(temp,first_string);
	strcpy(first_string,second_string);
	strcpy(second_string,temp);
	free(temp);
	printf("\nThe string after swapping\n%s\n%s",first_string,second_string);	
}
