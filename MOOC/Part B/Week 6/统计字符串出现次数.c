#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]="\0",w[100]="\0";
	gets(str);gets(w);
	int n=strlen(str),m=strlen(w),ans=0;
	for(char *p=str;p<str+n;p++){
		int flag=1;
		for(char *q=w,*pp=p;q<w+m&&pp<str+n;pp++,q++)
			if(*pp-*q){
				flag=0;
				break;
			}
		if(flag)	ans++;
	}
	if(ans)	printf("%d\n",ans);
	else	puts("No");
}
