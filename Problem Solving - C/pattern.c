#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=2*i-1;j++)
       {
           printf("*");
       }
       printf("\n");
    }
    return 0;
}
