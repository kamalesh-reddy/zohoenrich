#include<stdio.h>
#include<string.h>
int main()
{
 char str[20];
 int len,i,flag=0;
 scanf("%s",str);
 len=strlen(str);
 for(i=0;i<len/2;i++)
  {
   if(str[i]!=str[len-1-i])
    {
     flag=1;
     break;
    }
  }
 if(flag==1) 
  printf ("is not palindrome");
 else
  printf("is palindrome");
 return(0); 
}
