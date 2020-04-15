//7. Find the extra element and its index Input : [ 10, 20, 30, 12, 5 ] [ 10, 5, 30, 20 ] Output : 12 is the extra element in array 1 at index 4 
#include<stdio.h>
int main()
{
	int input_array1[100];
	int input_array2[100];
	int array1_length,array2_length,i,j;
	int searching(int outer_size,int inner_size,int max_array[100],int min_array[100]);
	printf("Enter the size of the first array");
	scanf("%d",&array1_length);
	for(i=0;i<array1_length;i++)
	{
		scanf("%d",&input_array1[i]);	
	}
	printf("Enter the size of the second array");
	scanf("%d",&array2_length);
	for(i=0;i<array2_length;i++)
	{
		scanf("%d",&input_array2[i]);	
	}
	if(array1_length>array2_length)
	{
		searching(array1_length,array2_length,input_array1,input_array2);	
	}
	else
		searching(array2_length,array1_length,input_array2,input_array1);
	
}

int searching(outer_size,inner_size,max_array[],min_array[])
{
	int count=0;
	for(i=0;i<outer_size;i++)
	{	
		for(j=0;j<inner_size;j++)
		{
			if(max_array[i]==min_array[j])
			{
				count=1;
				break;	
			}	
		}
		if(count!=1)
		{
			printf("%d is the extra element at index %d",max_array[i],i);		
		}
				
	}
}
