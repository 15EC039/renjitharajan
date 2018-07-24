#include <stdio.h>
#include<conio.h>
int main()
{
  int a[100],b,i,c;
  scanf("%d",&b);
  for(i=0;i<b;i++)
  {
      scanf("%d",&a[i]);
  }
c=b/2;
if(b%2==0)
{
 printf("\n%d %d",a[c-1],a[c]);
}
else
{
    printf("\n%d",a[c]);
}
return 0;
}
