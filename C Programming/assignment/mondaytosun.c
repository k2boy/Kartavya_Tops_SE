#include<stdio.h>.
void main()
{
	
	int c;
	printf("enter 1 to 7 for displaying monday to sunday\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1 :printf("monday");
		        break;
		case 2 :printf("tuesday");
		        break;
		case 3 :printf("wednesday");
		        break;
		case 4 :printf("thursday");
		        break;
		case 5 :printf("friday");
		        break;						        
		case 6 :printf("saturday");
		        break;        
		case 7 :printf("sunday");
		        break;
		        default:printf("invalid choice");
		                break;
		
	}
}