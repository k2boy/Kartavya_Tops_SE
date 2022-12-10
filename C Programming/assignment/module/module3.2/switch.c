#include<stdio.h>

void main()
 {
 	char c;
 	
 	printf("enter a word :");
 	scanf("%c",&c);
 	
 	switch(c)
 	{
 		case  'a':
 		case  'e':
 		case  'i':
 		case  'o':
 		case  'u':
 		case  'A':
 		case  'E':
 		case  'I':
 		case  'O':
 		case  'U' 
		 			:printf("%c is vovel:",c);
 					break;
 		default : printf("%c is consonant",c);
 		break;
 	
	 }
 }