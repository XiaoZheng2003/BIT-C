#include<stdio.h>
int f(int m,int n){
	if(m==1||n==1)	return 1;
	if(m<n)	return f(m,m);
	if(m==n) return 1+f(m,m-1);
	return f(m,n-1)+f(m-n,n);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",f(m,n));
}
