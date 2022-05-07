#include<stdio.h>
int findf(int n){
	if(n>=0&&n<=4)	return 1;
	if(n>4)
		if(n%2)	return findf(n-2)+findf(n-4);
		else	return findf(n-1)+findf(n-3);
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",findf(n));
}
