#include<stdio.h>
int main()
{
int i,j,k,num;
printf("Enter any value : ");
scanf("%d”,&num");
for(i=-num;i<=num;i++)
{
      k=i;
if(k<0)
{
         k = k * –1;
}
for (j = 0; j <= num; ++j)
{
if (j<k)
{
printf(”  “);   // two spaces
}
else
{
printf("* ");   // one star, one space.
}
}
printf("n");
}
return 0;
}