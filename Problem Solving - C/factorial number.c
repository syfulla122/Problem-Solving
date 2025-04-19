#include<stdio.h>
int main()
{
    int i, num;
    int fact = 1;
     i = 1;
    printf("\n enter the number to calculate its factorial:");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
            printf("\n the factorial of given number %d is = %d",num,fact);
    }

    return 0;
}
