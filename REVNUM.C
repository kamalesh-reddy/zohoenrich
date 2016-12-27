#include<stdio.h>
void main()
{
int n,a,r;
scanf("%d",&n);
while(n>0)
 {
  a=n%10;
  r=r*10+a;
  n=n/10;
 }
 printf("rev num is :%d",r);
}
