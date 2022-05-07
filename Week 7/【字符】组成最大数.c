#include<stdio.h>
int isdigit(char t){return t>='0'&&t<='9';}
int p[10];
int main()
{
	char tmp;
	while(~scanf("%c",&tmp))
		if(isdigit(tmp))
			p[tmp-'0']++;
	for(int i=9;i>=0;i--)
		while(p[i]--)
			putchar(i+'0');
	putchar('\n');
}
