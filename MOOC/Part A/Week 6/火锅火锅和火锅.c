#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,a[10005],ans=-1005;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++){
			int tmp=0;
			for(int j=i;j<=n;j++){
				tmp+=a[j];
				if(tmp>ans)
					ans=tmp;
			}
		}
		printf("%d\n",ans);
	}
}
