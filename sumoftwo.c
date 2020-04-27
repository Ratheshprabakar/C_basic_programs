/*Given 2 arrays a,b containing o integers and a integer target value v. Determine whether there is a pair of numbers, where one number is taken from a, and other from b, that can be added together to get a sum of 'v'. Return True if such a pair exists, otherwise return False.

Sample Input : a=[1,2,3] b=[1,40,5],v=42
Sample Output : True
Explanation : [2,40] --> 2+40=42
*/
#include<stdio.h>
int main()
{
	int size_of_a,size_of_b,diff=0;
	int target,flag=1;
	int i,j;
	int *array_a,*array_b;
	printf("Enter the size of array A\t");
	scanf("%d",&size_of_a);
	array_a=(int *)malloc(size_of_a*sizeof(int));
	printf("Enter the size of array B\t");
	scanf("%d",&size_of_b);
	array_b=(int *)malloc(size_of_b*sizeof(int));
	printf("Enter the elements of array A\n");
	for(i=0;i<size_of_a;i++)
	{
		scanf("%d",&array_a[i]);	
	}
	printf("Enter the elements of array B\n");
	for(i=0;i<size_of_b;i++)
	{
		scanf("%d",&array_b[i]);	
	}
	printf("Enter the target sum\t");
	scanf("%d",&target);
	for(i=0;i<size_of_a;i++)
	{
		diff=abs(target-array_a[i]);
		for(j=0;j<size_of_b;j++)
		{
			if(diff==array_b[j])
			{
				flag=0;
				break;
			}	
	
		}
	}
	(flag==1)?printf("False"):printf("True");
	free(array_a);
	free(array_b);
}
