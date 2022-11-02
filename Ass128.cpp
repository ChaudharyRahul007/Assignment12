/*8. Write a recursive function to print binary of a given decimal number*/
#include<stdio.h>
void DtoB(int);
void DtoB(int x)
{
    if(x==1)
    {
        printf("1");
    }
    else{
        DtoB(x/2);
        printf("%d",x%2);
    }
}
int main()
{
    int n;
    printf("Enter a number to convert in binary:");
    scanf("%d",&n);
    DtoB(n);
    return 0;
}