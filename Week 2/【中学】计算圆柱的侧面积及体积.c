#include<stdio.h>
const double pi=3.1415926;
int main()
{
	double r,h;
	scanf("%lf%lf",&r,&h);
	printf("s=%.2lf,v=%.2lf\n",2*pi*r*h,pi*r*r*h);
}
