#include<stdio.h>
int main()
{
	int i,j;
	for(i=9;i;i--){
		for(j=1;j<i;j++)
			printf("%d ",i*j);
		printf("%d\n",i*i);
	}
}
