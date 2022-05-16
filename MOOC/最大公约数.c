#include<stdio.h>
int gcd(int a,int b){
	if(!(a%b))	return b;
	return gcd(b,a%b);
}
int main()
{
	int m,n;
	scanf("%d,%d",&m,&n);
	printf("%d\n",gcd(m,n));
}
