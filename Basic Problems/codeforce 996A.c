#include<stdio.h>
int main()
{
    int n,s=0;
    int arr[5]={100,20,10,5,1};
    scanf("%d",&n);
    int i=0;
    while(i<5)
    {
        s=s+n/arr[i];
        n=n%arr[i];
        i++;
    }
    printf("%d",s);
    return 0;

}
