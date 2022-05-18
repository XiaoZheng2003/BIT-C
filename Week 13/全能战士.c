#include<stdio.h>
int n[7];
int main()
{
	for(int i=0;i<7;i++)
		scanf("%d",&n[i]);
	for(int i=1;i<4;i++)
		n[0]-=n[i];
	for(int i=4;i<7;i++)
		n[0]+=n[i];
	printf("%d\n",n[0]);
}
