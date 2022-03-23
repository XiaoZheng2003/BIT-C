#include<stdio.h>
int main()
{
	int n,i,j,cnt=1,a[100][100];
	scanf("%d",&n);
	for(i=1;i<=(n%2?n/2+1:n/2);i++){
		for(j=i;j<=n-i+1;j++)
			a[i][j]=cnt++;
		for(j=i+1;j<=n-i+1;j++)
			a[j][n-i+1]=cnt++;
		for(j=n-i;j>=i;j--)
			a[n-i+1][j]=cnt++;
		for(j=n-i;j>i;j--)
			a[j][i]=cnt++; 
		
	}
	for(i=1;i<=n;i++){
		for(int j=1;j<n;j++)
			printf("%3d",a[i][j]);
		printf("%3d\n",a[i][n]);
	}
}
