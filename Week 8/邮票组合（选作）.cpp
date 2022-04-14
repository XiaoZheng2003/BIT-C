#include<stdio.h>
int flag[10000];
int main()
{
	int a[5];
	for(int i=1;i<=4;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<=5;i++)
		for(int j=0;j<=5-i;j++)
			for(int k=0;k<=5-i-j;k++)
				for(int p=0;p<=5-i-j-k;p++)
					flag[a[1]*i+a[2]*j+a[3]*k+a[4]*p]=1;
	for(int i=1;;i++)
		if(!flag[i]){
			printf("The max is %d.\n",i-1);
			return 0;
		}
}
