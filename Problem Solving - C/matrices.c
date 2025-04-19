#include<stdio.h>
int main()
{
    int arr[3][3],arr2[3][3],arr3[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
             scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           arr3[i][j]=arr[i][j]+arr2[i][j];
        }

    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
          printf("%d ",arr3[i][j]);
        }
      printf("\n");
    }
    return 0;
}
