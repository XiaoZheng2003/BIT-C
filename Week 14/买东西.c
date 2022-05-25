#include<stdio.h>
typedef struct buy{
	char gname;
	int sname;
	int gprice;
}BUY;
int findm(int n,int gp[][3],BUY schm[]){
	int min=gp[0][0]+gp[1][1]+gp[2][2];
	for(int i=0;i<3;i++)
		schm[i].sname=i+1,schm[i].gprice=gp[i][i];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j)
			for(int k=0;k<n;k++)
				if(i!=k&&j!=k){
					int sum=gp[i][0]+gp[j][1]+gp[k][2];
					if(sum<min){
						min=sum;
						schm[0].sname=i+1;schm[0].gprice=gp[i][0];
						schm[1].sname=j+1;schm[1].gprice=gp[j][1];
						schm[2].sname=k+1;schm[2].gprice=gp[k][2];
					}
				}
	return min;
}
int main()
{
	int i,j,n;
	int min,price[10][3];
	static BUY scheme[3]={{'A',0,0},{'B',0,0},{'C',0,0}};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			scanf("%d",&price[i][j]);
	min=findm(n,price,scheme);
	printf("Total Money are : %d\nGoods-Name  Shop-Name  Goods-Price\n",min);
	for(i=0;i<3;i++)
		printf("         %c:%10d%13d\n",scheme[i].gname,scheme[i].sname,scheme[i].gprice);
	return 0;
}
