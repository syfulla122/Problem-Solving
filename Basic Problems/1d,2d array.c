#include<stdio.h>
int main()
{
    int n=3,m=4,i,j;
     int sum=0;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //int sum=0;
    for(i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
