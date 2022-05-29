#include<math.h>
#include<stdio.h>
const int a[10]={1,10,100,1000,10000,100000,1000000};
int main()
{
	int n,i,j,flag=0;
	scanf("%d",&n);
	for(i=a[n-1];i<a[n];i++){
		int tmp=i,sum=0;
		for(j=0;j<n;j++){
			sum+=pow(tmp%10,n);
			tmp/=10;
		}
		if(i==sum){
			flag=1;
			printf("%d\n",i);
		}
	}
	if(!flag)
		puts("No output.");
}
