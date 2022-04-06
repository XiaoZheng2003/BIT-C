#include<stdio.h>
int p[130];
int main()
{
	char tmp;
	while(~scanf("%c",&tmp))
		p[tmp]++;
	for(int i=32;i<127;i++)
		while(p[i]--)
			putchar(i);
	putchar('\n');
}
