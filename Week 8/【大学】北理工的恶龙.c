#include<stdio.h>
void sort(int *arr,int n){
	int tmp;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			if(arr[i]>arr[j]){
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
}
int main()
{
	int n,m,d[105],h[105],ans=0,j=1,cnt=0;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&d[i]);
	for(int i=1;i<=m;i++)
		scanf("%d",&h[i]);
	sort(d,n);
	sort(h,m);
	for(int i=1;i<=n;i++)
		for(;j<=m;j++){
			if(d[i]<=h[j]){
				ans+=h[j++];
				cnt++;
				break;
			}
		}
	if(cnt==n)	printf("%d\n",ans);
	else	puts("bit is doomed!");
} 
