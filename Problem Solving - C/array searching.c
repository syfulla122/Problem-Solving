#include <stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int i,value,pos=-1;
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==arr[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("not found");
    }
    printf("value is at position %d",pos);
    return 0;
}
