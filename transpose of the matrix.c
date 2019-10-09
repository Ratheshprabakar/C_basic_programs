#include<stdio.h>
void main()
{
	int x[10][10],a,b,i,j;
	printf("Enter the row and column of the matrix");
	scanf("%d\t%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("The transpose of the matrix is ");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		printf("%d",x[j][i]);
		}
	}
	
}
