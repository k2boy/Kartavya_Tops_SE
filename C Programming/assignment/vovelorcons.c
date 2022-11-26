#include<stdio.h>
void main()
{
	char ch;
	printf("enter any alphabet :");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
		printf("entered alphabet is vovel");
		      break;
		      default:printf("entered alphabet is consonant");
	}
}