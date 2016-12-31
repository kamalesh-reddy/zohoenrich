#include<stdio.h>
int main()
{
   int a[20],k,i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
   scanf("%d",&k);
   occurences(a,k,n);
   return 0;
}
void occurences(int a[],int k,int n)
{
   int i,c=0;
   for(i=0;i<n;i++)
    {
      if(a[i]==k)
       {
        c++;
       }
    }
   printf("number of occurences : %d",c);
}
