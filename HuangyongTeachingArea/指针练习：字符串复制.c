#include<stdio.h>
int main()
{
	char str[100],ans[100]="\0",*p,*q;
	gets(str);
	for(p=str,q=ans;*p;p++,q++)
		*q=*p;
	puts(ans);
}
