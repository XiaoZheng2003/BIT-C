#include<stdio.h>
int main()
{
	int cnt=0,t;
	while(~scanf("%d",&t)&&t){
		if(!t)	break;
		else	cnt+=1<<(t-1);
	}
	printf("%d\n",cnt);
}
