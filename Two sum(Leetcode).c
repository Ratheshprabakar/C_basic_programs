/*Given an array of integers, return indices of the two numbers such that they add up to a specific target. You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example : 
Given nums = [2,7,11,15], target =9,
Because nums[0] + nums[1] = 2 +7 =9,
return [0,1]

*/
#include<stdio.h>
int main()
{
	int *input_array,target,size,i,j,first=0,second=0,diff;
	printf("Enter number of elements\t");
	scanf("%d",&size);
	input_array=(int *)malloc(size * sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&input_array[i]);	
	}
	printf("Enter the target sum\t");
	scanf("%d",&target);
	for(i=0;i<size;i++)
	{
		diff=abs(target-input_array[i]);
		for(j=i+1;j<size;j++)
		{
			if(input_array[j]==diff)
			{
				first=i;
				second =j;
				break;	
			}	
		}
		if(input_array[second]+input_array[first]==target)
		{
			break;	
		}	

	}
	
	(first==0 && second ==0)?printf("\nNo sum occurs"):printf("[%d,%d]",first,second);

}
