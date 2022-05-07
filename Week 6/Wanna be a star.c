#include<stdio.h>
int main()
{
	int max=-1,min=101,sum=0,t,i=10;
	for(;i;i--){
		scanf("%d",&t);
		max=t>max?t:max;
		min=t<min?t:min;
		sum+=t;
	}
	sum-=max+min;
	sum/=8;
	printf("Canceled Max Score:%d\n",max);
	printf("Canceled Min Score:%d\n",min);
	printf("Average Score:%d\n",sum);
}
