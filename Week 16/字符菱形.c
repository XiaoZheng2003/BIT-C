#include<stdio.h>
char map[1000][3];
int next(int n){return (n-'A')%26+'A';}
int main()
{
	int n;
	scanf("%d %c",&n,&map[0][0]);
	for(int i=1;i<=2*n-2;i++)
		map[i][0]=next(map[i-1][0]+1);
	for(int i=1;i<2*n-2;i++)
		map[i][1]=next(map[2*n-2][0]+2*n-2-i);
	for(int i=0;i<n;i++){
		for(int j=1;j<n-i;j++)	putchar(' ');
		putchar(map[i][0]);
		for(int j=1;j<=2*i-1;j++)
			putchar(' ');
		if(i)	putchar(map[i][1]);
		putchar('\n');
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=i;j++)	putchar(' ');
		putchar(map[n+i][0]);
		for(int j=1;j<2*n-2*i-4;j++)
			putchar(' ');
		if(i<n-2)	putchar(map[n+i][1]);
		putchar('\n');
	}
}
