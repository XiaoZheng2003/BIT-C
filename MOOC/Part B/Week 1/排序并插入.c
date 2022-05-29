#include<stdio.h>
int main()
{
	int arr[15],p,n=10;
	for(int i=1;i<n;i++,getchar())
		scanf("%d",&arr[i]);
	scanf("%d",&p);
	for(int i=1;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]>arr[j]){
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
	int t;
	for(int i=1;i<n;i++)
		if(arr[i]>p){
			t=i;
			break;
		}
	for(int i=n;i>t;i--)
		arr[i]=arr[i-1];
	arr[t]=p;
	for(int i=1;i<n;i++)
		printf("%d,",arr[i]);
	printf("%d\n",arr[n]);
}
