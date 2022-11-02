/*5. Write a recursive function to print first N even natural number*/
#include<stdio.h>
void even(int);
void even(int x)
{
    if(x>0)
    {
        even(x-1);
        printf("%d ",2*x);
    }
}
int main()
{
    int n;
    printf("Enter a number to print even no ");
    scanf("%d",&n);
    even(n);
    return 0;
}