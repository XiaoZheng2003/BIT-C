#include<stdio.h>
int main()
{
	int n,i,j,flag;
	scanf("%d",&n);
	for(i=n;i>1;i--){
		flag=0;
		for(j=2;j<i/2;j++)
			if(!(i%j)){
				flag=1;
				break;
			}
		if(!flag){
			printf("The max prime number is %d.\n",i);
			return 0;
		}
	}
}
