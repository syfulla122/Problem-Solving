#include<stdio.h>
double Addition (double a,double b, double c)
{
    double sum = 0;
    sum = a+b+c;
    return sum;
}
double Subtraction (double a, double c)
{
    double sub = 0;
    sub = a-c;
    return sub;
}
double Multiplication (double a, double b)
{
    double mul = 0;
    mul = a*b;
    return mul;
}
double Division (double a, double b)
{
    double divi = 0;
    divi = a/b;
    return divi;
}
double Addition (double a,double b, double c);
double Subtraction (double a,double c);
double Multiplication (double a,double b);
double Division (double a,double b);
int main()
{
    double num1,num2,num3,add = 0,su = 0,mu = 0,div = 0;
    printf("Enter the input :");
    scanf("%lf%lf%lf",&num1,&num2,&num3);

    add = Addition(num1,num2,num3);
    su = Subtraction(num1,num3);
    mu = Multiplication(num1,num2);
    div =Division(num1,num2);

    printf("\nThe sum is = %lf",add);
    printf("\nThe sub is = %lf",su);
    printf("\nThe mul is = %lf",mu);
    printf("\nThe divi is = %lf",div);
    return 0;
}

