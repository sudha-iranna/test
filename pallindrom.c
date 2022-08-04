#include<stdio.h>  
pallindrom()    
{    
int n,r,sum=0,temp;    
printf("\n enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("the given number is palindrome number ");    
else    
printf("the number is not palindrome");   
return 0;  
}  
