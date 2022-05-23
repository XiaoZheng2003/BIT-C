#include<stdio.h>
void sort(int *a,int n){
	for(int *i=a;i<a+n-1;i++)
		for(int *j=i+1;j<a+n;j++)
			if(*i>*j){
				int p=*i;
				*i=*j;
				*j=p;
			}
}
int main()
{
	int n=10,arr[15];
	for(int i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	sort(arr+1,n);
	for(int i=1;i<n;i++)
		printf("%d,",arr[i]);
	printf("%d\n",arr[n]);
}
