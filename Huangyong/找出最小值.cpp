#include<stdio.h>
int main()
{
	int n,t,i,ans=1e9;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		ans=t<ans?t:ans;
	}
	printf("%d\n",ans);
}
