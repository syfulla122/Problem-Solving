#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Input your row collum:\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
