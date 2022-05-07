#include<math.h>
#include<stdio.h>
double dis(double ax,double ay,double bx,double by){
	return sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by)); 
}
int main()
{
	double x1,y1,x2,y2,x3,y3,p,a,b,c;
	scanf("(%lf,%lf) (%lf,%lf) (%lf,%lf)",&x1,&y1,&x2,&y2,&x3,&y3);
	a=dis(x1,y1,x2,y2);b=dis(x1,y1,x3,y3);c=dis(x2,y2,x3,y3);p=0.5*(a+b+c);
	printf("%.2lf\n",sqrt(p*(p-a)*(p-b)*(p-c))); 
}
