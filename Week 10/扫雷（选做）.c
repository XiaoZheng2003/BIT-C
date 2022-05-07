#include<stdio.h>
#include<string.h>
int map[105][105];
const int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
int main()
{
	int n,m,cnt=0;
	while(~scanf("%d%d",&n,&m)){
		if(!n&&!m)	return 0;
		memset(map,0,sizeof(map));
		if(cnt)	putchar('\n');
		printf("Field #%d:\n",++cnt);
		for(int i=1;i<=n;i++){
			getchar();
			for(int j=1;j<=m;j++){
				char ch=getchar();
				if(ch=='*') map[i][j]=1;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(map[i][j]){
					putchar('*');
					continue;
				}
				int p=0;
				for(int k=0;k<8;k++)
					if(map[i+dir[k][0]][j+dir[k][1]])
						p++;
				printf("%d",p);
			}
			putchar('\n');
		}
	}
}
