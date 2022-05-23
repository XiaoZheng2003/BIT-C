#include<stdio.h>
int check(int n,int t){
	if(!t&&n==2)return 1;
	if(!t||n%2)	return 0;
	return check(n/2-1,t-1);
}
void print(int n){
	if(n==2)	return;
	printf("sell=%d,",n/2+1);
	print(n/2-1);
}
int main()
{
	for(int i=1;;i++)
		if(check(i,7)){
			printf("sum=%d\n",i);
			print(i);puts("");
			break;
		}
}
