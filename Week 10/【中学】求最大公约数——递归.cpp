#include<stdio.h>
int gcd(int n,int m){
	if(m<=n&&!(n%m))	return m;
	if(n<m)	return gcd(m,n);
	return gcd(m,n%m);
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d\n",gcd(n,m));
}
