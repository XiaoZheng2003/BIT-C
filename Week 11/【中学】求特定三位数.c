#include<stdio.h>
int Do(int a,int flag[]){
	do{
		if(flag[a%10])	return 0;
		flag[a%10]=1;
	}while(a/=10);
	return 1;
}
int Check(int a){
	if(!(a%10))			return 0;
	int flag[10]={1};
	if(!Do(a,flag))		return 0;
	if(!Do(2*a,flag))	return 0;
	if(!Do(3*a,flag))	return 0;
	return 1;
}
int main()
{
	int t,f=0;
	scanf("%d",&t);
	for(int i=100*t+1;i<100*(t+1);i++)
		if(Check(i)){
			printf("%d,%d,%d\n",i,2*i,3*i);
			f=1;
		}
	if(!f)	puts("0,0,0");
}
