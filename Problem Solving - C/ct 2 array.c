/*//string diclare
/*#include<stdio.h>
int main()
{
    char str[]="s,v,e,b";
    char str1[]="t,y,u,i,";
    puts(str);
    puts(str1);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    char str[100];
    char str2[100];
    fgets(str,sizeof(str),stdin);
    fgets(str2,sizeof(str2),stdin);
    puts(str);
    puts(str2);
    return 0;
}*/
#include<stdio.h>
int main()
{
    char str[100],str2[100];
    fgets(str,sizeof(str),stdin);
    strcpy(str2,str);
    puts(str2);
    return 0;
}
//revers
*
#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    puts(strrev(str));
    return 0;
}
//str length
#include<stdio.h>
int main()
{
    char str[100];
    int l;
    fgets(str,sizeof(str),stdin);
    l = strlen(str);
    printf("%d",l);
    return 0;


}*/
/*#include<stdio.h>
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
    printf("len=%d\n",len);
    while(str2[j]!='\0')
    {
        str1[len+t]=str2[j];
        j++;
    }
    printf("str = %s",str1);
    printf("%s",str2);
    return 0;
}*/


















