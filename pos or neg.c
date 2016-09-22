#include<stdio.h>
void main()
{
int a;
printf("\nEnter the number");
scanf("%d",&a);
if(a==0)
{
printf("\nThe given number is zero");
}
else if(a<0)
{
printf("\nThe given number is negative");
}
else if(a>0)
{
printf("\nThe given number is positive");
}
return 0;
}
