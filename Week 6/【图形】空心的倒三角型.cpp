#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
		putchar('*');
	putchar('\n'); 
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++)	putchar(' ');
		putchar('*');
		for(j=1;j<=2*(n-i-1)-1;j++)	putchar(' ');
		if(i!=n-1)	putchar('*');
		putchar('\n');
	}	
} 
