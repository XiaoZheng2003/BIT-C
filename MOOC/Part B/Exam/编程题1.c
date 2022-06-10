#include<math.h>
#include<stdio.h>
int main()
{
	int m,n,ans=0;
	scanf("%d,%d",&m,&n);
	for(int i=m;i<=n;i++)
		if(fabs((int)sqrt(i)-sqrt(i))<10e-6)
			ans+=i;
	printf("%d\n",ans);
}
