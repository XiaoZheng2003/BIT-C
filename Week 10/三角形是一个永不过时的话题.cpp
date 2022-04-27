#include<math.h>
#include<stdio.h>
struct point{int x,y;}p[105];
double dis(struct point a,struct point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)); 
}
double TriS(struct point a,struct point b,struct point c){
	double x=dis(a,b),y=dis(a,c),z=dis(b,c),p=0.5*(x+y+z);
	return sqrt(p*(p-x)*(p-y)*(p-z));
} 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n;double ans=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d%d",&p[i].x,&p[i].y);
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				for(int k=j+1;k<=n;k++)
					if(TriS(p[i],p[j],p[k])>ans)
						ans=TriS(p[i],p[j],p[k]);
		printf("%.1lf\n",ans);
	}
}
