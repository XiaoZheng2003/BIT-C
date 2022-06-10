#include<stdio.h>
int next(int c){return (c-'a')%26+'a';}
int main()
{
	int n,cnt=0;char c;
	scanf("%d,%c",&n,&c);
	for(int i=0;i<n;i++)
		putchar(next(c+(cnt++)));
	putchar('\n');
	for(int i=1;i<=n-2;i++){
		for(int j=1;j<n-i;j++)	putchar(' ');
		putchar(next(c+(cnt++)));putchar('\n');
	}
	for(int i=0;i<n;i++)
		putchar(next(c+(cnt++)));
	putchar('\n');
}
