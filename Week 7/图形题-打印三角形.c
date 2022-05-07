#include<stdio.h>
int main()
{
	int st,h,cnt,i,j,a[100],b[100];
	scanf("%d%d",&st,&h);
	for(i=h,cnt=st;i;i--,cnt++,cnt%=10)	putchar(cnt+'0');
	putchar('\n');
	for(i=1;i<h;i++,cnt++,cnt%=10)	b[i]=cnt;
	for(i=h-2;i>0;i--,cnt++,cnt%=10)	a[i]=cnt;
	for(i=1;i<h-1;i++){
		putchar(a[i]+'0');
		for(j=h-i-2;j>0;j--)	putchar(' ');
		printf("%d\n",b[i]);
	}
	if(h>1)	printf("%d\n",b[h-1]);
}
