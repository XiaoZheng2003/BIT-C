#include<stdio.h>
#include<string.h> 
int main()
{
	char str[1005];
	gets(str);
	int n=strlen(str);
	for(int i=n-1;i>=0;i--)
		putchar(str[i]);
	putchar('\n');
}
