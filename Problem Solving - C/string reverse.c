#include<stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%s",str);
    int l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
