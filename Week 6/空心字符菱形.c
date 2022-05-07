#include<stdio.h>
int n;
char ch;
void putch(int i){
	int j;
	for(j=1;j<n-i;j++)	putchar(' ');
	putchar(ch+i);
	for(j=1;j<=2*i-1;j++)
		putchar(' ');
	if(i)	putchar(ch+i);
	putchar('\n');
}
int main()
{
	int i;
	scanf("%c%d",&ch,&n);
	for(i=0;i<n;i++)
		putch(i);
	for(i=n-2;i>=0;i--)
		putch(i);
} 
