#include<stdio.h>
void main()
{
int n,m,s=0,a;
printf("Input:");
scanf("%d",&n);
m=n;
 while(n>0)
 {
  a=n%10;
  s=(s*10)+a;
  n=n/10;
 }
 if(s==m)
  printf("\nOUTPUT:YES");
 else
  printf("\nOUTPUT:NO");
}
