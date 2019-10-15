//C Program to Find the Largest Number Among Three Numbers
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter any three numbers\t");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b)
   {
     if(a>c)
       {
          printf("The Largest number is %d",a);
       }
     else
        printf("The Largest number is %d",c);
     }
   else if(b>c)
     printf("The Largest number is %d",b);
   else
     printf("The Largest number is %d",c);

}
