#include<stdio.h>
int main()
{
	int m,n,cnt=0,sum=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		int flag=0;
		for(int j=2;j<i/2+1;j++)
			if(!(i%j))	flag=1;
		if(!flag){
			cnt++;
			sum+=i;
		}
	}
	printf("%d %d\n",cnt,sum);
}
