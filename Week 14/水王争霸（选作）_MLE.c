/*该程序为MLE（超出内存限制）代码*/
#include<stdio.h>
#include<string.h>
struct person{
	char name[25];
	short num[10000],cnt;
}p[1000];
int isdigit(int n){return n>='0'&&n<='9';}
int cmp(int a,int b){
	if(p[a].cnt!=p[b].cnt)	return p[a].cnt<p[b].cnt;
	int n=p[a].cnt; 
	for(int i=0;i<n;i++)
		if(p[a].num[i]!=p[b].num[i])
			return p[a].num[i]<p[b].num[i];
	return strcmp(p[a].name,p[b].name)>0;
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(p[i].name);
		char c;
		while(isdigit(c=getchar()))
			p[i].num[p[i].cnt++]=c-'0';
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(cmp(i,j)){
				struct person tmp;
				tmp=p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
	for(int i=0;i<n;i++)
		puts(p[i].name);
}
