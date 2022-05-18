#include<stdio.h>
#include<string.h>
int add(int a,int b){return a+b;}
int minus(int a,int b){return a-b;}
int multiply(int a,int b){return a*b;}
int divide(int a,int b){return a/b;}
int main()
{
	int a,b;
	char op[20];
	int (*p)(int,int);
	scanf("%d,%d,%s",&a,&b,op);
	if(!strcmp(op,"add"))			p=add;
	else if(!strcmp(op,"minus"))	p=minus;
	else if(!strcmp(op,"multiply"))	p=multiply;
	else if(!strcmp(op,"divide"))	p=divide;
	else {puts("Error");return 0;}
	printf("%d\n",p(a,b));
}
