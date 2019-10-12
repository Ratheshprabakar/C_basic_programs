//C Program to Generate Multiplication Table
#include<stdio.h>
void main()
{
  int a,i,n;
  printf("Enter the Table no.");
  scanf("%d",&a);
  printf("Enter the Table limit");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d * %d=%d\n",i,a,i*a);
   }

}
