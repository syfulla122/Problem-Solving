/*#include<stdio.h>
int main()
{
    int arr[3][3],arr2[3][3];
    int i,j;
    printf("enter value of arr\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j],arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}*/

#include<stdio.h>
int main()
{
    int arr[3][3],arr2[3][3],arr3[3][3],arr4[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
             scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           arr4[i][j]=arr[i][j]-arr2[i][j];
        }

    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",arr3[i][j]);

        }

      printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",arr4[i][j]);

        }

      printf("\n");
    }

    return 0;
}

/*#include<stdio.h>
int main()
{
    char str[100];
    int c=0,f=0,g=0,j=0,i=0;
    int l=strlen(str);
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
        {
            c++;
        }
        else
        {
            j++;
        }

      i++;
    }

    printf("vowel = %d\nconsonant = %d",c,j-1);
    return 0;
}*/
