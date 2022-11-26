#include<stdio.h>
void main()
{
	float amount,rate,time;
	
	printf("**********simple intrest is***********");
	
	printf("\n\nenter the amount :");
	scanf("%f",&amount);
	printf("\nenter the rate :");
	scanf("%f",&rate);
	printf("\nenter the time :");
	scanf("%f",&time);
	
	printf("the si is =%f",(amount*rate*time/100));
}