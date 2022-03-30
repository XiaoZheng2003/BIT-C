#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*(n-i);j++)
			putchar(' ');
		for(j=1;j<=i;j++)
			printf("%2d",j);
		j-=2;
		for(;j;j--)
			printf("%2d",j);
		putchar('\n');
	}
} 
