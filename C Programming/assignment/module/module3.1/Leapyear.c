// leap year

#include<stdio.h>
void main()
{
	int y;
	printf("enter year=");
	scanf("%d",&y);
	
	if(y%400==0 || y%4==0 && y%100!=0)
	 {
	 printf("Year is a leap year");
	 }
	 
	else
	{
		printf("this is not a leap year");
	}
}