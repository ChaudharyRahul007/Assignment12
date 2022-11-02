/*9. Write a recursive function to print octal of a given decimal number*/
#include<stdio.h>
void DtoO(int);
void DtoO(int x)
{
    if(x>=1)
    {
        DtoO(x/8);
        printf("%d",x%8);
    }
}
int main()
{
    int n;
    printf("Enter a number to convert octal no:");
    scanf("%d",&n);
    DtoO(n);
    return 0;
}