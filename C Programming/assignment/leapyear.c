#include<stdio.h>

void main()
{
	
	int y;
    printf("enter the year :");
    scanf("%d",&y);
    if(y%400==0 ||y%4==0 && y%100!=0)
    {
    	printf("year is a leap yera");
	}
	else
	{
		printf("year is not a leap year");
	}
}