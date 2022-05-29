#include<stdio.h>
int main()
{
	double i,ans=0;
	scanf("%lf",&i);
	if(i>1e6){ans+=0.01*(i-1e6);i=1e6;}
	if(i>6e5){ans+=0.015*(i-6e5);i=6e5;}
	if(i>4e5){ans+=0.03*(i-4e5);i=4e5;}
	if(i>2e5){ans+=0.05*(i-2e5);i=2e5;}
	if(i>1e5){ans+=0.075*(i-1e5);i=1e5;}
	ans+=0.1*i;
	printf("%.1lf\n",ans);
}
