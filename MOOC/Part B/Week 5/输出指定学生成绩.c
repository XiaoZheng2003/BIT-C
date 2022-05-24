#include<stdio.h>
int main()
{
	int score[3][4],person,*p,sum=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&score[i][j]);
	scanf("%d",&person);
	p=score[person-1];
	for(int *i=p;i<p+4;i++){
		printf("%d%c",*i,i==p+3?'\n':' ');
		sum+=*i;
	}
	printf("%g\n",sum/4.0);
}
