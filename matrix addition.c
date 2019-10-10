#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],row1,col1,row2,col2,i,j,k;
	printf("Enter the row and column of the first matrix");
	scanf("%d\t%d",&row1,&col1);
	printf("Enter the row and column of the second matrix");
	scanf("%d\t%d",&row2,&col2);
	if((row1==row2)&&(col1==col2))
	{
		printf("Enter the first matrix ");
		for(i=0;i<row1;i++)
		{
			for(j=0,k=0;j<col1;j++,k++)
			{
				printf("\nEnter the  element of 1 st matrix");
			    scanf("%d",&a[i][j]);
			}
		}
	    for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("\nEnter the  element of 2 nd matrix");
			    scanf("%d",&b[i][j]);
			}
		}
		printf("The sum matrix is given by");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%d",(a[i][j]+b[i][j]));
			}
		}
	}
	else
	 printf("Addition is not possible");
}
