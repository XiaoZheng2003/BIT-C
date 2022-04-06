#include<stdio.h>
int main()
{
	int n,t;
	scanf("%d",&n);n*=10;
	if(n%16)	puts("No change.");
	else	t=n/16,printf("%d,%d,%d\n",t*10,t*12,t*9);
}
