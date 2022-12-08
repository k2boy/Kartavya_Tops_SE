#include<stdio.h>
void main()
{
	
	float no1,no2;
	int choice;
	
	printf("===calculator===\n");
	
	printf("1.for addition\n2.for div\n3.for mul\n4.for sub\n");
	printf("\nenter your choice\n");
	scanf("\n%d",&choice);
	printf("enter the first no=");
	scanf("%f",&no1);
	printf("\nenter the second no=");
	scanf("%f",&no2);
	switch(choice)
	{
		case 1: printf("addition is =%f+%f=%f",no1,no2,no1+no2);break;
	    case 2: printf("divition is =%f+%f=%f",no1,no2,no1/no2);break;
	    case 3: printf("miltiplication is =%f+%f=.%f",no1,no2,no1*no2);break;
	    case 4: printf("substraction is =%f+%f=%f",no1,no2,no1-no2);break;
	    break;
	    default:printf("invalid choice");
	    break;


	}
	
}