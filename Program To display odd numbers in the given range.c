//To display odd numbers in the given range
#include<stdio.h>
void main()
{
  int a,b,i;
  printf("Enter the range...\nStarting value\t");
  scanf("%d",&a);
  printf("\nEnding Value\t");
  scanf("%d",&b);
  for(i=a;i<=b;i++)
  {
    if(!(i%2==0))
      printf("%d\n",i);
   }

}

