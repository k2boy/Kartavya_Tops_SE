#include<stdio.h>
void main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	(n%2) ? printf("%d is odd  number",n):printf("%d is even number",n);
}