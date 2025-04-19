#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str2[100];
	scanf("%s%s",str,str2);
	int l=strlen(str),i;
	int a=0,b=0;
	for(i=0;i<l;i++){
		if(i%2!=0){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
				a++;
			}
		}
	}
	int z=strlen(str2);
	for(i=0;i<z;i++){
		if(i%2!=0){
			if(str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u'){
				b++;
			}
		}
	}
	if(a==b){
		printf("Strings are same");
	}
	else{
		printf("%d string mismatch found",a-b);
	}
	return 0;
}
