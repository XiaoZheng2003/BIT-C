#include<stdio.h>
#include<string.h>
char str[105];
int check(int l,int r){
	if(l>=r)	return 1;
	return str[l]==str[r]&&check(l+1,r-1);
}
int main()
{
	gets(str);
	int n=strlen(str);
	printf("%s\n",check(0,n-1)?"Yes":"No");
}
