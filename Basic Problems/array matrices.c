#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("enter the value of matrices:");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }

    }
    return 0;
}
