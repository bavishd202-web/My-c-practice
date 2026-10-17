#include<stdio.h>
int main()
{
   int n,count=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
   if(n%i==0){
     count++;
   }
   }if(n>1 && count==2)
     printf("prime");
   else
     printf("not a prime");
  }         
