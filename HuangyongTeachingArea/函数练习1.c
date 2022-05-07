#include<stdio.h>
#define cube(n) (n)*(n)*(n)
int main()
{
	int n;
	scanf("%d",&n);
	if(cube(n/100)+cube(n/10%10)+cube(n%10)==n)
		puts("True");
	else	puts("False");
}
