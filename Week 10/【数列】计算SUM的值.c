#include<stdio.h>
int main()
{
	double sum=0;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		sum+=1.0/i;
	printf("sum=%lf\n",sum);
}
