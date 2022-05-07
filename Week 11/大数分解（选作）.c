#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		while(!(n%i)){
			printf("%d\n",i);
			n/=i;
		}
		if(n==1)
			break;
	} 
}
