#include<stdio.h>
int main()
{
	int n,m=1,i;
	scanf("%d",&n);
	for(i=n-1;i;i--){
		m+=i;
		m*=2; 
	}
	printf("%d\n",m);
}
