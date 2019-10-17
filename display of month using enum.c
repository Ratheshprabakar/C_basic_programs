#include<stdio.h>
void main()
{   int a;
	enum month {january=1,feb,march,april,may,june,july,august,september,october,november,december};
	printf("Enter the month number ");
	scanf("%d",&a);
	switch(a)
	{
		case january:
			printf("January");
			break;
		case feb:
			printf("Febrary");
			break;
		case march:
			printf("March");
			break;
		case april:
			printf("April");
			break;
		case may:
			printf("May");
			break;
		case june:
			printf("June");
			break;
		case july:
			printf("July");
			break;
		case august:
			printf("August");
			break;
		case september:
			printf("September");
			break;
		case november:
			printf("November");
			break;
		case december:
			printf("December");
			break;
		default:
			printf("Invalid Month");
			break;
	
   
			
	}
	

	
}
