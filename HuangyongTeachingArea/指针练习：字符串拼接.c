#include<stdio.h>
int main()
{
	char str1[100]="\0",str2[100]="\0",*p,*q;
	gets(str1);gets(str2);
	for(p=str2;*p;p++);
	for(q=str1;*q;q++,p++)
		*p=*q;
	puts(str2);
}
