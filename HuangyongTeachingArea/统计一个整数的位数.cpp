#include<stdio.h>
int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	do{
		n/=10;
		cnt++;
	}while(n);
	printf("%d\n",cnt);
}
