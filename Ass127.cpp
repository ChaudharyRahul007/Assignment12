/*7. Write a recursive function to print squares of first N natural numbers*/
#include<stdio.h>
void squares(int);
void squares(int x)
{
    if(x>0)
    {
        squares(x-1);
        printf("%d ",x*x);
    }
}
int main()
{
    int n;
    printf("Enter a number to print squares:");
    scanf("%d",&n);
    squares(n);
    return 0;
}