#include<stdio.h>
int main()
{
	int input_array[100][100];
	int n,m,i,j;
	printf("Enter the no. of rows and colums\t");
	scanf("%d\t%d",&n,&m);
	printf("Enter the input values\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			scanf("%d",&input_array[i][j]);	
		}	
	}
	j=0;
	printf("The final resultant matrix is \n");
	for(i=0;i<n;i++)
	{
		if((j-1)==(m-1))
		{
			for(j=m-1;j>=0;j--)
			{
				printf("%d\n",input_array[i][j]);	
			}		
		}
		else
		{
			for(j=0;j<m;j++)
			{	

				printf("%d\n",input_array[i][j]);	
			}
		}
		

	}		
}
