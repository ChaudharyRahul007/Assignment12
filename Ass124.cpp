/*4. Write a recursive function to print first N odd natural numbers in reverse order*/
#include<stdio.h>
void oddre(int);
void oddre(int x)
{
    if(x>0)
    {
        printf("%d ",2*x-1);
        oddre(x-1);
    }
}
int main()
{
    int n;
    printf("Enter a number to print odd no in reverse :");
    scanf("%d",&n);
    oddre(n);
    return 0;
}