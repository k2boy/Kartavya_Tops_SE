#include<stdio.h>
void circle();
void ract();
void triangle();
void main()
{
	circle();
	ract();
	triangle();	
}
void circle()
{
	float r;
	printf("\nEnter radius=");
	scanf("%f",&r);
	printf("The area of Circle is=%.2f\n",(3.14*r*r));
}
void ract()
{
	int l,w;
	printf("\nEnter length=");
	scanf("%d",&l);
	printf("Enter Width=");
	scanf("%d",&w);
	
	printf("\nThe area of ractangle is=%d",(l*w));
}
void triangle()
{
	float b,h;
	printf("\n\nEnter base=");
	scanf("\n%f",&b);
	printf("Enter height");
	scanf("\n%f",&h);
	
	printf("\nThe area of triangle=%.2f",0.5*b*h);
}
