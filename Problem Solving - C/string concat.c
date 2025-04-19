#include<stdio.h>
int main()
{
    char str1[] = "My name is syfulla";
    char str2[] =" shawon";
    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("str = %s%s\n",str1,str2);
    //printf("str2 = %s\n",str2);

}
