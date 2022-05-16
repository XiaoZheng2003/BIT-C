#include<stdio.h>
#include<string.h>
int check(char *l,char *r){
	if(l>=r)	return 1;
	return *l==*r&&check(l+1,r-1);
}
int main()
{
	char str[105];
	gets(str);
	int n=strlen(str);
	printf("%s\n",check(str,str+n-1)?"YES":"NO");
}
