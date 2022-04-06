#include<stdio.h>
char name[100];
int main()
{
	gets(name);
	printf("Hi,there,%s!\n",name);
}
