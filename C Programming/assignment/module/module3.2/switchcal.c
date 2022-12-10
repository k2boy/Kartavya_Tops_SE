#include<stdio.h>
void main()
{
	int a,b,choice;
	
	printf("***********Menu***********");
	printf("\n1. Addition\n2. substraction\n3. sustraction\n4. division\n");
	printf("\nenter your choice=");
	scanf("%d",&choice);

	
	printf("\nEnter first number=");
	scanf("%d",&a);
	printf("\nEnter second number=");
	scanf("%d",&b);
	
		
	switch(choice)
	{
		 
		case 1 : printf("\nthe addition is=%d",(a+b));
				break;
		case 2 : printf("\the subtraction is=%d",(a-b));
				break;
		default : printf("invalid choice !!!");
				break;		
	}
}