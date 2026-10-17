#include<stdio.h>
int main()
{
   int n,sum=0,digit;
   scanf("%d",&n);
   while(n!=0){
     digit=n%10
     sum=sum+digit;
     n=n/10;
   }   
      printf("sum=%d\n");
      
}      
