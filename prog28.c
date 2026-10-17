#include<stdio.h>
int main()
{  
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b>c){
    printf("a is greatest");
    
    }else if (a>b) && (b>c){
      printf("a is greatest");
        
    }else if (a<b) &&(b>c){
      printf("b is greatest");
   
     }else{
        printf("c is greatest");
   }
    }
