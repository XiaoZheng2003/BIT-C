#include<stdio.h>
int add(int n){
	if(!n)	return 0;
	return 2*n-1+add(n-1); 
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",add(n));
}
