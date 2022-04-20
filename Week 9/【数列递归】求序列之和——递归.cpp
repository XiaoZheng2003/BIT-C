#include<stdio.h>
double sum(int n){
	if(n<2)	return 0;
	return ((n%2)?-1.0:1.0)/n+sum(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)	puts("1");
	else	printf("%lf\n",1+sum(n));
}
