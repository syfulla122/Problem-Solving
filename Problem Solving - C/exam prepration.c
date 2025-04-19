#include<stdio.h>
int main()
{
    int i,n;
    int t1 = 0, t2 = 1;
    int nxt;
    scanf("%d",&n);
    printf("Fibonacci series :%d,%d,",t1,t2);
    for(i=2;i<n;i++)
    {
        nxt = t1+t2;
        printf("%d, ",nxt);
        t1=t2;
        t2=nxt;
    }
    return 0;
}


/*#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("Input the number of terms :\n");
    scanf("%d",&n);
    printf("Expected Output :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",i*i);
        sum = sum + i*i;
    }
    printf(" the n terms of square natural number %d  and their sum is :%d",n,sum);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,n,t = 9;
    int sum = 0;
    scanf("%d",&n);
    printf("input the number of turms :");
    for(i=1;i<=n;i++)
    {
        sum = sum + t;
        printf("%d ",t);
        t = t*10+9;

    }
    printf("the sum of the series: %d ",sum);
    return 0;

}*/

/*#include<stdio.h>
int main()
{
    double i,n,sum = 0;
    scanf("%lf",&n);
    printf("enter the number :\n");
    for(i=1;i<=n;i++)
    {
        sum = sum + 1/i;
        if(i==1)
        printf("\n1+");
        else if(i==n)
        printf("1/%lf",i);
        else
        printf("(1/%lf)+",i);
    }
    printf("sum = %lf",sum);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("input the number of turms:\n");
    scanf("%d",&n);
    printf("input the odd number :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d,",2*i-1);
        sum = sum + 2*i-1;
    }
    printf("The Sum of odd Natural Number upto %d terms :%d",n,sum);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("Input the number (Table to be calculated) : \n");
    for(i=1;i<=n;i++)
    {
        printf(" the multiplication %d table of a given integer %d :%d\n",n,i,n*i);
    }
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("enter the number of turms :\n");
    for(i=1;i<=n;i++)
    {
        printf("\n the number is %d and the cube is %d number is :%d",i,i,i*i*i);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,n;
    float num,sum = 0,avg = 0;
    printf("how many number you want to scan?\n");
    scanf("%d",&n);
    printf("enter the number from keyboard\n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&num);
        sum = sum + num;
    }

      avg = sum/n;
    printf("\nenter the sum = %f",sum);
    printf("\nenter the avg = %f",avg);


    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,num,sum = 0;
    scanf("%d",&num);
    printf("enter the naural number and their sum = %d \n ",num);
    for(i=1;i<=10;i++)
    {
        printf("%d,",i);
        sum = sum + i;
    }
    printf("sum of the natural number %d turm is %d\n ",num,sum);
    return 0;
}*/







/*#include<stdio.h>
int main()
{
    int i,num,sum = 0;
    scanf("%d",&num);
    printf("enter the natural number : %d \n",num);
    for(i=1;i<=20;i++)
    {
        printf("%d ",i);

    }
 return 0;
}*/



