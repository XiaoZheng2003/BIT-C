#include<stdio.h>
int main()
{
	int n,r,rp[1005];
	scanf("%d%d",&n,&r);
	for(int i=1;i<=n;i++)
		scanf("%d",&rp[i]);
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
			if(rp[i]>rp[j]){
				int tmp=rp[i];
				rp[i]=rp[j];
				rp[j]=tmp;
			}
	int t,cnt=0;
	for(t=1;t<=n;t++)
		if(rp[t]>=r)
			break;
	for(int i=t;i<=n;i++)
		if(rp[i]>=r)
			r+=2;
		else
			cnt++;
	printf("%d\n",r+cnt+t-1);
}
