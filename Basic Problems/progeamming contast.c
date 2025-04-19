#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       if(i%2==0)
        {
           j=i;
           while(j%2==0)
           {
               printf("%d",j);
               j++;
           }
        }
    }
return 0;
}
