#include<stdio.h>
int main() 
{
  int n;
  printf("Enter any number:\n");
  scanf("%d",&n);
  (n%2) ? printf("%d is odd number",n) : printf("%d is even number",n);
  return 0;
}