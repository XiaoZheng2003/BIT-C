#include<stdio.h>
int n,k;
int print(int t,int s){
	int next;
	for(int i=k-1;i>=0;i--){
		for(int j=1;j<=i*2+s;j++)
			putchar(' ');
		if(i==k-1)
			for(int j=1;j<=t;j++)
				putchar('*');
		else if(!i){
			next=t+4*(k-1);
			for(int j=1;j<=next;j++)
				putchar('*');
		}
		else{
			putchar('*');
			for(int j=1;j<=t+4*(k-1-i)-2;j++)
				putchar(' ');
			putchar('*');
		}
		putchar('\n');
	}
	for(int i=1;i<=k;i++){
		for(int j=1;j<=s;j++)
			putchar(' ');
		printf("  *");
		for(int j=1;j<=next-6;j++)
			putchar(' ');
		printf("*\n");
	}
	return next;
}
int main()
{
	scanf("%d%d",&n,&k);
	int p=1;
	for(int i=1;i<=n;i++)
		p=print(p,2*(k-1)*(n-i));
	for(int i=1;i<=p;i++)
		putchar('*');
	putchar('\n');
}
