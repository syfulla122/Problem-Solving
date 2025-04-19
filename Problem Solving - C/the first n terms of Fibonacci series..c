#include<stdio.h>
int main()
{
    int i, n ;
    int t1 = 0,t2 = 1;
    int nxt;
    scanf("%d",&n);
    printf("Fibonacci series: %d,%d,",t1,t2);
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d ",nxt);
        t1 = t2;
        t2 = nxt;
    }
    return 0;
}
