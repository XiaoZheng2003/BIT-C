#include<stdio.h>
int n;
char ch;
void putch(int i){
	int j,t=ch+i;
	while(t>'Z') t-=26;
	for(j=1;j<n-i;j++)	putchar(' ');
	putchar(t);
	for(j=1;j<=2*i-1;j++)
		putchar(' ');
	if(i)	putchar(t);
	putchar('\n');
}
int main()
{
	int i;
	scanf("%c,%d",&ch,&n);
	for(i=0;i<n;i++)
		putch(i);
	for(i=n-2;i>=0;i--)
		putch(i);
}
