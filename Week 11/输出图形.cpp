#include<stdio.h>
int next(int c){return (c-'A')%26+'A';}
int main()
{
	int n,c;
	scanf("%d %c",&n,&c);
	putchar(c);
	if(n==1){putchar('\n');return 0;}
	for(int i=0;i<4*n-5;i++)	putchar(' ');
	printf("%c\n",c);
	for(int i=2;i<n;i++){
		putchar(next(c+3*n-i-2));
		for(int j=1;j<=2*i-3;j++)	putchar(' ');
		putchar(next(c+i-1));
		for(int j=1;j<=4*n-4*i-1;j++)	putchar(' ');
		putchar(next(c+i-1));
		for(int j=1;j<=2*i-3;j++)	putchar(' ');
		putchar(next(c+3*n-i-2));
		putchar('\n');
	}
	for(int i=0;i<n;i++)
		printf("%c ",next(c+2*n-2-i));
	for(int i=0;i<n-2;i++)
		printf("%c ",next(c+n+i));
	printf("%c\n",next(c+n*2-2)); 
}
