#include<stdio.h>
void factorial(int n)
{
    int i,t1,t2,nxt;
    t1=0;
    t2 =1;
    printf("0,1,");
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d,",nxt);
        t1=t2;
        t2=nxt;
    }
}

int main()
{
    int i,n,t1,t2,nxt;
    scanf("%d",&n);
    factorial(n);
    return 0;
}
