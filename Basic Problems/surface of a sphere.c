#include<stdio.h>
#define pie 3.1416
int main()
{
    double area , r;
    printf("enter the redious of a sphere = ");
    scanf("%lf",&r);
    area = 4*pie*r*r;
    printf("enter the surface of a sphere :\n%.2lf",area);
    return 0;

}
