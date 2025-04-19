#include<stdio.h>
#include<math.h>
int main()
{
    int  i, n;
     printf("Input number of terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nThe number: %d and the cube of the %d is : %d",i,i,i*i*i);
    }
    return 0;
}
