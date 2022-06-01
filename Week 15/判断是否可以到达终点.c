#include<stdio.h>
int x1,y1,x2,y2;
int judge(int x,int y){
	if(x>x2||y>y2)	return 0;
	if(x==x2&&y==y2)return 1;
	return judge(x,x+y)||judge(x+y,y);
}
int main()
{
	scanf("%d,%d%d,%d",&x1,&y1,&x2,&y2);
	if(judge(x1,y1))	puts("Yes.");
	else	puts("No.");
}
