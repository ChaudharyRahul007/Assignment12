/*3. Write a recursive function to print first N odd natural numbers*/
#include<stdio.h>
void num(int);
void num(int x)
{
   if(x>0)
   {
    num( x-1);
    printf("%d ",2*x-1);
   }
}
int main()
{ 
    int n;
    printf("Enter a number to print odd Number:");
    scanf("%d",&n);
    num(n);
    return 0;
}