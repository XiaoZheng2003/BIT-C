#include<stdio.h>
#include<string.h>
int n,m;
char s[100],t[100];
int main()
{
	gets(s);gets(t);
	n=strlen(s);m=strlen(t);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(t[i]==s[j])
				s[j]=127;
	for(int i=0;i<n;i++)
		if(s[i]!=127)	putchar(s[i]);
	putchar('\n');
}
