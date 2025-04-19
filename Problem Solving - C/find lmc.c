#include<stdio.h>
int main()
{
    int n,re,sum = 0;
    printf("enter a numner :");
    scanf("%d",&n);
    while(n>0)
    {
        re = n / 10;
        sum = sum + re;
        n = n / 10;
    }
    printf("\n sum of digits of a number is = %d",sum);
    return 0;
}
