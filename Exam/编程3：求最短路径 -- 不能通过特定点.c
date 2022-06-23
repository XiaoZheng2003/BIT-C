#include<stdio.h>
int main()
{
	int map[100][100]={0};
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	map[1][0]=1;m++;n++;p++;q++;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			if(i==p&&j==q)	continue;
			map[i][j]=map[i-1][j]+map[i][j-1];
		}
	printf("%d\n",map[m][n]);
	if(!map[m][n]){
		puts("No path!");
		return 0;
	}
	int flag=0;
	for(int i=1;i<=m;i++){
		if(i==p&&q==1){
			flag=1;
			break;
		}
		printf("(%d,0)",i-1);
	}
	if(flag)
		for(int i=p-1;i<=m;i++)
			printf("(%d,1)",i-1);
	for(int i=flag+2;i<=n;i++)
		printf("(%d,%d)",m-1,i-1);
	putchar('\n');
}
