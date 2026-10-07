#include<stdio.h>
int main()
{
int a,b;
printf("enter your theory mark and practical mark");
scanf("%d%d",&a,&b);
if(a>=0&&a<=40&&b>=0&&b<=60) {
if(a>=20&&b>=30) {
if(a>=30&&b>45)
printf("you have passed with class A");
else
printf("you have passed with class B");
}
else
printf("you have failed");
}
else 
printf("check the entered wrong mark");
return 0;
}
