#include<stdio.h>
int main()
{
    int i, num, sum = 0;
    scanf("%d",&num);
    printf("The first %d natural number is :\n",num);
    for(i=1;i<=num;i++)
    {
        printf("%d",i);
        sum = sum + i;
    }
    printf("the sum of natural number upto %d terms : %d",num,sum);
return 0;
}
