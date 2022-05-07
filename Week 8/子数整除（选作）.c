#include<stdio.h>
int main()
{
	int k,sub1,sub2,sub3;
	scanf("%d",&k);
	for(int i=10000;i<=30000;i++){
		sub1=i/100;sub2=i/10%1000;sub3=i%1000;
		if(!(sub1%k)&&!(sub2%k)&&!(sub3%k))
			printf("%d\n",i);
	}
} 
