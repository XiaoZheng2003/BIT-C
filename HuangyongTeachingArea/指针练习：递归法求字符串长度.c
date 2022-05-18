#include<stdio.h>
int _strlen(char *p){
	if(*p)	return 1+_strlen(p+1);
	return 0;
}
int main()
{
	char str[100];
	gets(str);
	printf("%d\n",_strlen(str)); 
}
