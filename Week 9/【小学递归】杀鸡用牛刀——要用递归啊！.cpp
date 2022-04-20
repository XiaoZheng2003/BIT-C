#include<stdio.h>
int sum(int l,int r){
	return l==r?l:sum(l,r-1)+r;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("The sum from %d to %d is %d.\n",n,m,sum(n,m));
}
