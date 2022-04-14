#include<stdio.h>
int main()
{
	int num[15],t=getchar(),p1=0,p2=0;
	for(int i=1;i<=11;t=getchar())
		if(t!='\n') num[i++]=t-'0';
	for(int i=1;i<=11;i++)
		if(i%2)	p1+=num[i];
		else	p2+=num[i];
	printf("%d\n",9-(p1*3+p2-1)%10);
}
