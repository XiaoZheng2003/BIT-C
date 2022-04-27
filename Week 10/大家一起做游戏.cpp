#include<stdio.h>
int flag[55];
int main()
{
	int n,m,cnt=0,j=0;
	scanf("%d%d",&n,&m);
	for(int i=1;;i++,i=i>n?1:i){
		if(cnt==n-1)break;
		if(flag[i])	continue;
		j++;
		if(j==m)	flag[i]=1,cnt++,j=0;
	}
	for(int i=1;i<=n;i++)
		if(!flag[i]){
			printf("The left child is NO %d.\n",i);
			return 0;
		}
}
