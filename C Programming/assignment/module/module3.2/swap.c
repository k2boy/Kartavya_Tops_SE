#include<stdio.h>  
 int main()    
{    
int a=50, b=30;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=50 (20+30)    
b=a-b;//b=30 (50-30)    
a=a-b;//a=20 (50-30)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   