#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();

void main()
{
	add();
	sub();
	div();
	mul();
	mod();
}

void add()
{
	int a,b;
	printf("*********Addition*******");
	printf("\nenter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);
	printf("\nthe addition is=%d\n",(a+b));
}
void sub()
{
	int a,b;
	printf("*********subtraction*******");
	printf("\nenter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);
	printf("\nthe subtraction is=%d\n",(a-b));
}
void mul()
{
	int a,b;
	printf("*********multiply*******");
	printf("\nenter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);
	printf("\nthe multiply is=%d\n",(a*b));
}
void div()
{
	float a,b;
	printf("*********division*******");
	printf("\nenter a :");
	scanf("%f",&a);
	printf("\n enter b :");
	scanf("%f",&b);
	printf("\nthe division is=%.2f\n",(a/(float)b));
}
void mod()
{
	int a,b;
	printf("*********modulo*******");
	printf("\nenter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);
	printf("\nthe modulo is=%d\n",(a%b));
}