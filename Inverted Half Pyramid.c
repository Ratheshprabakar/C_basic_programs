//C Program to print Inverted Half Pyramid
#include<stdio.h>
int main()
{
    int i,j,n;
    int k;
    scanf("%d",&n);
    k=n-1;
    for(i=n;i>=0;i--)
    {   ;
        for(j=i-1;j<k;j++)
        {
            printf(" ");
        }
        for(j=i+(i-1);j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
        k++;    
    }
    return 0;
}

