#include<stdio.h>
void main()
{
	FILE *f1,*f2;
	char a;
	f1=fopen("data.txt","r");
	f2=fopen("copy.txt","w");
	while(!feof(f1))
	{
		a=fgetc(f1);
		fputc(a,f2);
	}
	fclose(f1);
	fclose(f2);
	f2=fopen("copy.txt","r");
	while(!feof(f2))
	{
		a=fgetc(f2);
		printf("%c",a);
	}
}
	

