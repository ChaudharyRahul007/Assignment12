/*10. Write a recursive function to print reverse of a given number*/
#include<stdio.h>
void reverse(int);
void reverse(int x)
{
    if(x>0)
    {
        printf("%d",x%10);
        reverse(x/10);
    }
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}