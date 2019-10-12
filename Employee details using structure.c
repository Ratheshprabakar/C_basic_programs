#include<stdio.h>
struct details
{
	char name[25];
	int age;
	float salary;
};
void main()
{
 int i,a;
 printf("Enter No. of the employees");
 scanf("%d",&a);
 struct details s[a];
 for(i=0;i<a;i++)
 {
 	printf("Enter the %d person details",i+1);
 	printf("Enter the name:");
 	scanf("%s",s[i].name);
 	printf("ENter the age");
 	scanf("%d",&s[i].age);
 	printf("Enter your salary");
 	scanf("%f",&s[i].salary);
 }
  for(i=0;i<a;i++)
 {
 	printf(" the %d person details",i+1);
 	printf("the name is %s",s[i].name);
 	printf("the age is %d",s[i].age);
 	printf(" your salary is %f",s[i].salary);
 }
 	
}
