#include<stdio.h>
int main()
{
	int n,k,arr[100][2];
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i][0]);
		arr[i][1]=1;
		for(int j=1;j<i;j++)
			if(arr[i][0]==arr[j][0]){
				arr[i][1]=0; 
				arr[j][1]++;
				break;
			}
	}
	int flag=0;
	for(int i=1;i<=n;i++)
		if(arr[i][1]>k){
			printf("%d\n",arr[i][0]);
			flag=1;
		}
	if(!flag)	puts("No such element.");
}
