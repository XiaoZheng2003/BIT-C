#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b){
		if(a==b&&b==c) puts("equilateral triangle.");
		else if(a==b||b==c||a==c) puts("isoceles triangle.");
		else  puts("triangle."); 
	}
	else puts("non-triangle.");
}
