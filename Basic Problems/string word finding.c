#include<stdio.h>
int main()
{
    char str[100];
    int i=0,c=0,d=0,e=0,f=0;
    int l=strlen(str);
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            c++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            d++;
        }
      else if(str[i]>='0' && str[i]<='9')
        {

            e++;
        }
        else
        {
            f++;
        }
        i++;
    }
   printf("number of capital letter =%d\n",d);
   printf("number of small letter =%d\n",c);
   printf("number of digits =%d\n",e);
   printf("number of special character =%d\n",f);


    return 0;
}
