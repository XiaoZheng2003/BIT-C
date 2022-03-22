#include<math.h>
#include<stdio.h>
#define abs(a) a>0?a:-(a)
#define ZERO 1e-12
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(!a&&!b) puts("Input error!");
	else if(!a) printf("x=%lf\n",-c/b+ZERO);
	else{
		double delta=b*b-4*a*c,x1=-b/(2*a);
		if(!delta){
			printf("x1=x2=%lf\n",x1+ZERO);
			return 0;
		}
		double x2=sqrt(abs(delta))/(2*a);
		if(delta>0) printf("x1=%lf\nx2=%lf\n",x1+x2,x1-x2);
		else{
			if(!x1) printf("x1=%lfi\nx2=%lfi\n",x2,-x2);
			else printf("x1=%lf+%lfi\nx2=%lf-%lfi\n",x1,x2,x1,x2);
		}
	}
}
