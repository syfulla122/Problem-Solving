#include<stdio.h>
int main()
{
    int age;
    char gender,F,M;
    printf("enter the age integer :");
    scanf("%d",&age);
    printf("enter the  gender :\n");
    scanf("%c",&gender);
    if(age>=18 && gender== 'F')
    {
        printf("you are eligable\n");
    }
    else if(age>=18 && gender== 'M')
    {
        printf("you are eligable\n");
    }
    else
    {
        printf("you are not eligable\n");
    }

    return 0;
}
