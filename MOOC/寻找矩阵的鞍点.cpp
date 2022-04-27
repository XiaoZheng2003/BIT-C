#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,arr[105][105],ax=0,ay=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&arr[i][j]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			if(arr[i][j]>arr[i][ay])
				ay=j;
		for(int j=0;j<n;j++)
			if(arr[j][ay]<arr[ax][ay])
				ax=j;
		if(ax==i){
			printf("Point:a[%d][%d]==%d\n",ax,ay,arr[ax][ay]);
			return 0;
		}
	}
	puts("No Point");
}
