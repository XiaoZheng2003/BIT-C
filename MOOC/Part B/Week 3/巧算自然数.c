#include<stdio.h>
int main()
{
	int n,cnt=1;
	scanf("%d",&n);
	while(n!=1){
		printf("%d,",n);
		if(n%2)	n=n*3+1;
		else n/=2;
		cnt++;
	}
	printf("1\nstep=%d\n",cnt);
}
