#include<stdio.h>
#include<string.h>
int n;
char str[100];
int main()
{
	gets(str);n=strlen(str);
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(str[i]==str[j])
				str[j]=127;
	for(int i=0;i<n;i++)
		if(str[i]!=127)	putchar(str[i]);
	putchar('\n');
}
