#include<math.h>
#include<stdio.h>
#define p(a) (a)*(a)
int main()
{
	double w,l,x0,y0,x1,y1,x,y;
	char pos[1005];
	scanf("%lf%lf%lf%lf%lf%lf ",&w,&l,&x0,&y0,&x1,&y1);
	gets(pos);x=x0,y=y0;
	for(int i=0;pos[i];i++)
		switch(pos[i]){
			case 'F':y=-y;break;
			case 'B':y=2*l-y;break;
			case 'L':x=-x;break;
			case 'R':x=2*w-x;break;
		}
	printf("%.4lf\n",sqrt(p(x-x1)+p(y-y1)));
}
