#include<stdio.h>
int main()
{
	int n,i,t=1,ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t=t*i;
		ans+=t;
	}
	printf("%d\n",ans);
}
