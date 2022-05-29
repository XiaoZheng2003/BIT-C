#include<stdio.h>
int main()
{
	int t,sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&t);
		sum+=t;
	}
	printf("%d %.1lf\n",sum,sum/10.0);
} 
