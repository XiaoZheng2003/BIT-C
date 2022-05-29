#include<stdio.h>
double ab(double a){return a<0?-a:a;}
int main()
{
	int h,m;
	scanf("%d%d",&h,&m);
	double t1,t2;
	t2=m*360.0/60;
	t1=(h==12?0:h)*360.0/12+t2/12;
	printf("At %d:%02d the angle is %.1lf degrees.\n",h,m,ab(t1-t2));
}
