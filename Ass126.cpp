/*6. Write a recursive function to print first N even natural numbers in reverse order*/
#include<stdio.h>
void evener(int);
void evener(int x)
{
    if(x>0)
    {
        printf("%d ",2*x);
        evener(x-1);
    }
}
int main()
{
    int n;
    printf("Enter a number to print even no in reverse:");
    scanf("%d",&n);
    evener(n);
    return 0;
}