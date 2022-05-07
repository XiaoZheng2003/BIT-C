#include<stdio.h>
int main()
{
	char a;
	a=getchar();
	if(a>=65&&a<=90) a+=32;
	else if(a>=97&&a<=122) a-=32;
	printf("%c\n",a);
}
