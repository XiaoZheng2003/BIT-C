#include<stdio.h>
#include<string.h>
void reverse(char* str){
	int n,len=strlen(str);
	for(int i=1;i<len;i++){
		if(*(str+i)=='(')
			reverse(str+i);
		else if(*(str+i)==')'){
			n=i;
			break;
		}
	}
	for(int i=1;i<=n/2;i++){
		char tmp=*(str+i);
		*(str+i)=*(str+n-i);
		*(str+n-i)=tmp;
	}
	*str=*(str+n)=1;
}
int main()
{
	char str[10005]="\0";
	gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++)
		if(str[i]=='(')
			reverse(str+i);
	for(int i=0;i<n;i++)
		if(str[i]!=1)
			putchar(str[i]);
	putchar('\n');
}
