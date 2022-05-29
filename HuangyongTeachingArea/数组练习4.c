#include<stdio.h>
int main()
{
	int n=0,a[20];
	char s[2]="\0";
	while(~scanf("%d",&a[n++]));
	n--;
	for(int i=0;i<n;i++){
		int t=1;
		for(int j=0;j<n;j++)
			if(i!=j)	t*=a[j];
		printf("%s%d",s,t);
		s[0]=' ';
	}
	putchar('\n');
}
