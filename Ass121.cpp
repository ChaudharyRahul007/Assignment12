/*1. Write a recursive function to print first N natural numbers*/
#include<stdio.h>
void num(int);
void num(int x)
{
   if(x>0)
   {
    num( x-1);
    printf("%d ",x);
   }
}
int main()
{ 
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    num(n);
    return 0;
}