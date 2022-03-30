#include<stdio.h>
int n;
void rec(int i){
	int j;
	for(j=1;j<=2*(n-i);j++)
		putchar(' ');
	for(j=n;j>n-i;j--)
		printf("%-2d",j);
	j+=2;
	for(;j<=n;j++)
		printf("%-2d",j);
	putchar('\n');
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)	rec(i);
	for(i=n-1;i;i--)	rec(i);
} 
