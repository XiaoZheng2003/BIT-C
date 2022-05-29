#include<stdio.h>
int next(int c){return (c-'A')%26+'A';}
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)	putchar(' ');
		for(int j=i-1;j<2*(i-1);j++)	putchar(next(c+j));
		putchar(next(c+2*(i-1)));
		for(int j=2*(i-1)-1;j>i-2;j--)	putchar(next(c+j));
		putchar('\n');
	}
}
