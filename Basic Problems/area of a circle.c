#include<stdio.h>
#define pi 3.1416
int main()
{
    double Area,r;
    printf("enter the value of redious =\n");
    scanf("%lf",&r);
    Area = pi*r*r;
    printf("enter the Area of a circle = %.4lf\n",Area);
    return 0;
}
