#include<stdio.h>
#define pie 3.1416
int main()
{
    double volume,r;
    printf("enter the redious of sphere = ");
    scanf("%lf",&r);
    volume = 4/3.0*pie*r*r*r;
    printf("enter the volume of sphere :\n%.2lf",volume);
    return 0;
}

