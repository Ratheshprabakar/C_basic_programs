#include<stdio.h>
void main()
{
	int n,flag=1,i,j,temp=0,value;
	int a[100];
	printf("Length of the array:\t")
	scanf("%d",&n);
  printf("Enter the n Maximum value");
  scanf("%d",&value);
  printf("Enter values\n");
	for(i=0;i<n;i++)
		{
			scanf("%d\t",&a[i]);	
		}
	if(n<value)
		printf("Range exceeds!!");
	else
	{
		
		for(i=n-1;i>=0&&flag;i--)
		{
			flag=0;
			for(j=0;j<=i-1;j++)
			{
				if(a[j]<a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					flag=1;
				}
			}
		}
		printf("\n\nThe %d Maximum is : %d",value,a[value-1]);
	}
}
