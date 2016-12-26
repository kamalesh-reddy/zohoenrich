#include<stdio.h>
void main()
{
  int n,s=0,a,c=0;
  scanf("%d",&n);
  while(n>0)
   {
    s=s+(n%10);
    n=n/10;
    c++;
   }
 printf("no of digits is : %d",c);
 printf("sum of digits is : %d",s);
}
