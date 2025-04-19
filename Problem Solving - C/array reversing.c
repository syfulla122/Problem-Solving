#include<stdio.h>
int main()
{
    int i,temp,n;
    int arr[n];
      printf("enter the size of array=");
    scanf("%d",&n);
  printf("enter the value of array=");
    int t = n - 1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

       printf("the array is:\n\n");
    for(i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[t];
        arr[t] = temp;
        t--;
    }
    for(i=0;i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
