#include<stdio.h>
int main()
{
	int score[3][4],sum[3]={0},*p[3][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&score[i][j]);
			sum[i]+=score[i][j];
		}
		p[i][0]=sum+i;p[i][1]=score[i];
		for(int j=0;j<i;j++)
			if(*p[i][0]>*p[j][0]){
				int *tp=p[i][0],*tq=p[i][1];
				p[i][0]=p[j][0],p[i][1]=p[j][1];
				p[j][0]=tp,p[j][1]=tq;
			}
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			printf("%d%c",*(p[i][1]+j),j<3?',':'\n');
}
