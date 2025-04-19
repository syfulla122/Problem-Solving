#include<stdio.h>
int main()
{
    int i,n,t=9;
    int sum = 0;
    printf("Input the number or terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
             sum = sum + t;
            printf("%d ",t);
            t = t*10 + 9;
        }
        printf("The sum of the series: %d\n",sum);
        return 0;
}
