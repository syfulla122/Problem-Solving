#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("Input the number of terms :");
    scanf("%d",&n);
    printf("Expected Output :%d\n");
    for(i=1;i<=n;i++)
     {
       printf("%d",i*i);
       sum = sum + i*i;
     }
     printf("The Sum of Square Natural Number upto %d terms: %d\n",n,sum);
     return 0;
}
