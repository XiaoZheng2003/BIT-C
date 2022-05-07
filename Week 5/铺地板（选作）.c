#include<stdio.h>
int main()
{
	int n,a[100][100],i,j,cnt=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(i%2)
			for(j=1;j<=i;j++)
				a[i-j+1][j]=cnt++;
		else
			for(j=1;j<=i;j++)
				a[j][i-j+1]=cnt++;
	for(i=2;i<=n;i++)
		if((i+n)%2)
			for(j=1;j<=n+1-i;j++)
				a[i+j-1][n-j+1]=cnt++;
		else
			for(j=1;j<=n+1-i;j++)
				a[n-j+1][i+j-1]=cnt++;
	for(i=1;i<=n;i++){
		for(int j=1;j<n;j++)
			printf("%2d ",a[i][j]);
		printf("%2d\n",a[i][n]);
	}
}
