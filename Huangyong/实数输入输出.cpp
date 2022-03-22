#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double sum=a+b+c;
	int sum1=(sum-(int)sum)<0.5?(int)sum:(int)sum+1; 
	printf("%.2lf %.2lf %.2lf\n%.2lf\n%d\n",a,b,c,sum,sum1); 
}
