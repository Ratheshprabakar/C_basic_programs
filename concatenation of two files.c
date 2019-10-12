#include<stdio.h>
void main()
{
   FILE *f1,*f2,*f3;
   char a;
   f1=fopen("file1.txt","r");
   f2=fopen("file2.txt","r");
   f3=fopen("file3.txt","w");
   if((f1==NULL)&&(f2==NULL)&&(f3==NULL))	
   {
   	printf("FILES does not exist");
   }
   else
    {
    	while(!feof(f1))
    	{
    		
    		a=fgetc(f1);
    		fputc(a,f3);
    		
		}
		while(!feof(f2))
    	{
    		
    		a=fgetc(f2);
    		fputc(a,f3);	
		}
		fclose(f1);
		fclose(f2);
		fclose(f3);
		f3=fopen("file3.txt","r");
		while(!feof(f3))
		{
		   a=fgetc(f3);
		   printf("%c",a);	
		}
	}
	
}
