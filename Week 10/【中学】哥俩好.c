#include<stdio.h>
int main()
{
	int n,a[10005];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n/2;i++)
		printf("%d ",a[i]*a[n-i+1]);
	if(n%2)	printf("%d ",a[n/2+1]);
	putchar('\n');
}
