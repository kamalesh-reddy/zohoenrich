#include<stdio.h>
void main()
{
int n,m,i=0;
printf("\nEnter 5 digit number :");
scanf("%d",&n);
printf("\nNo. of times to rotate :");
scanf("%d",&m);
 while(i<m)
  {
   n1=n%10000;
   n2=n/10000;
   n=n2+n1*10;
   i++;
  }
printf("\nOutput:%d",n);
}
