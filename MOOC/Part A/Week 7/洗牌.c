#include<stdio.h>
int main()
{
	int n,t=1,cnt=0;
	scanf("%d",&n);
	do{
		if(t<=n)	t<<=1;
		else		t=2*t-2*n-1;
		cnt++;
	}while(t!=1);
	printf("%d\n",cnt);
}
