#include<stdio.h>
#define pie 3.1416
float area (float r)
{
    float area = 0;
    area = pie*r*r;
    return area;
}

int main()
{
 float r ,a;
 scanf("%f",&r);
 a = area(r);
 printf("the area of circle :%.2f",a);
 return 0;

}
