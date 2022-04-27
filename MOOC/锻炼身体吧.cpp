#include<stdio.h>
int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	for(int k=n;k;k--)
		for(int i=1;i<=n;i++)
			for(int j=i;j<=n;j++)
				if(i*i+j*j==k*k)
					cnt++;
	printf("%d\n",cnt);
}
