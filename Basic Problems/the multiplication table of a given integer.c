#include<stdio.h>
int main()
{
    int i,n;
    printf("Input the number (Table to be calculated) :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("the multiplication table of a given integer is %d*%d= %d\n",i,n,n*i);

    }
    return 0;
}
