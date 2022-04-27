#include<stdio.h>
int CheckPal(int n){
	int arr[15],cnt=0;
	do{
		arr[++cnt]=n%10;
	}while(n/=10);
	for(int i=1;i<=cnt/2;i++)
		if(arr[i]!=arr[cnt-i+1])
			return 0;
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		if(CheckPal(i*i))
			printf("%d\n",i);
}
