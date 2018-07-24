#include <stdio.h>
#include<conio.h>
int main()
{
  int a[100],b,c,i,sum=0;
  scanf("%d",&b);
  scanf("%d",&c);
  for(i=0;i<b;i++)
  {
      scanf("%d",&a[i]);
  }
    for(i=0;i<c;i++)
  {
     sum=sum+a[i]; 
  }
  printf("%d",sum);
  return 0;
}
