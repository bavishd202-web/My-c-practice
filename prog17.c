#include<stdio.h>
int main()
{
char ch;
printf("enter a character:");
scanf("%c",&ch);
if(ch<='A'&&ch>='Z')
printf("it is upper case"); 
else if(ch<='a'&&ch>='z')
printf("it is lower case");
else
printf("it is not a character");
return 0;
}
