#include<stdio.h>
int main()
{
	int n,ans=0,t=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t+=i;
		ans+=t; 
	}
	printf("%d\n",ans);
}
