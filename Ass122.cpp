/*2. Write a recursive function to print first N natural numbers in reverse order*/
#include<stdio.h>
void num(int);
void num(int x)
{
   if(x>0)
   {
    printf("%d ",x);
    num( x-1);
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