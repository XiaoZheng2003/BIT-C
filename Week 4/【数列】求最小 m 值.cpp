#include<stdio.h>
int main()
{
	int n,i,sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++,sum+=i)
		if(sum>=n){
			printf("%d\n",i);
			return 0;
		}
}
