#include<stdio.h>
int main()
{
    int n,i,a,b;
    printf("enter the size of arr1 & arr2 :");
    scanf("%d%d",&a,&b);
    n=a+b;
    int arr1[a],arr2[b],arr3[n];
    printf("enter the first element :\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the second element :\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<a;i++)
    {
        arr3[i]=arr1[i];
    }
     for(i=0;i<b;i++)
     {
         arr3[i+a]=arr2[i];
     }
     printf("marged array is=\n");
     for(i=0;i<n;i++)
     {
         printf("%d\n",arr3[i]);
     }
     return 0;
}
