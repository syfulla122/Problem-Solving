#include<stdio.h>
int prime (int n);
int main()
{
    int i,j,k;
    scanf("%d",&k);
    j=prime(k);
    if(j==0)
        printf("%d is prime \n",k);
        else
            printf("%d is not prime \n",k);

    return 0;
}
int prime (int n)
{
    int i,j,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
