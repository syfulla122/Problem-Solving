#include<stdio.h>
int main()
{
    double i,n,sum = 0;
    printf("enter the n = ");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
        if (i==1)
            printf("\n1 +");
        else if (i==n)
            printf("1/%lf",i);
        else
            printf("(1/%lf)+ ",i);

    }
    printf("sum = %.2lf",sum);
    return 0;
}
