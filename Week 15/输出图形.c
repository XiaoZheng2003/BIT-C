#include<stdio.h>
#include<string.h>
int tran(int c){
	if(c>='A'&&c<='Z')	return c;
	if(c>='a'&&c<='z')	return c-32;
	return 0;
}
int next(int c){return (c-'A')%26+'A';}
int main()
{
	int n;char c;
	scanf("%d %c",&n,&c);
	if(!(n%2)||!tran(c)){
		puts("input error!");
		return 0;
	}
	c=tran(c);
	char map[100][100];
	memset(map,0,sizeof(map));
	for(int i=0;i<n;i++)
		map[0][i]=next(c+i);
	for(int i=1;i<n-1;i++){
		for(int j=0;j<n;j++)
			map[i][j]=' ';
		map[i][0]=next(map[0][0]+i);
		map[i][n-1]=next(map[0][n-1]+i);
		map[i][(n-1)/2]=next(map[0][(n-1)/2]+i);
	}
	for(int i=0;i<n;i++)
		map[n-1][i]=next(map[0][n-1]+i);
	for(int i=0;i<n;i++)
		puts(map[i]);
}
