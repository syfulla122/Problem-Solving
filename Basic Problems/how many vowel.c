#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int l=strlen(str),i;
	int a=0,b=0,c=0,d=0;
	for(i=0;i<l;i++){
	   if(str[i]>='a' && str[i]<='z'){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ){
			   a++;
		    }
		    else{
				b++;
			}
		}
		else if(str[i]>='0' && str[i]<='9'){
			c++;
		}
		else{
			d++;
		}
	}
	printf("Vowel = %d\nConsanant = %d\nDigits = %d\nSpecial char = %d\n",a,b,c,d);
}
