#include<stdio.h>
#define pie 3.1416
int main()
{
   double circumference ,r;
   printf("enter the redious of circle :");
   scanf("%lf",&r);
   circumference = 2*pie*r;
   printf("enter the circumference of circle =\n%.2lf",circumference);
   return 0;
}
