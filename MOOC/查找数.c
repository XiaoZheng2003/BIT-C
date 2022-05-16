#include<stdio.h>
int main()
{
	int a[15],t,n=10;
	for(int i=1;i<=n;i++)
		scanf("%d",a+i);
	scanf("%d",&t);
	for(int *p=a+1;p<=a+10;p++)
		if(*p==t){
			printf("%d\n",t);
			return 0;
		}
	puts("No");
}
