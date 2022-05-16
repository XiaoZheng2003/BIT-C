#include<stdio.h>
int calc(int n){
	if(!n)	return 0;
	return n%10+calc(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",calc(n)); 
}
