#include<stdio.h>
int main()
{
	int n=10,ans[15]={0},cnt=0,t;
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		if(t>ans[0]){
			cnt=1;
			ans[1]=i;
			ans[0]=t;
		}
		else if(t==ans[0]){
			cnt++;
			ans[cnt]=i;
		}
	}
	for(int i=1;i<=cnt;i++)
		printf("%d\n",ans[i]);
}
