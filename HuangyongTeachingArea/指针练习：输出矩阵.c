#include<stdio.h>
const int arr[]={0,1,2,3,4,5,6,7,8,9,10,11};
int main()
{
	int m,n,*p=arr;
	scanf("%d,%d",&m,&n);
	for(int i=0;i<m;i++,putchar('\n'))
		for(int j=0;j<n;j++)
			printf("%d ",*p++);
}
