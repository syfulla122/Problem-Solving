#include<stdio.h>
int main()
{
    int i, n;
    float num , sum = 0, avg = 0;
    printf("How many number you want to scan??\n");
    scanf("%d",&n);
  printf("Now enter the numbers : \n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&num);
        sum = sum + num;
    }
    avg =sum/n;
    printf(" the sum is : %f\n",sum);
    printf(" the average is :%f\n",avg);

    return 0;
}
