#include<stdio.h>
#include<string.h>
struct person{
	char name[20];
	int money;
}p[15];
int n;
int search(char tmp[]){
	for(int i=1;i<=n;i++)
		if(!strcmp(tmp,p[i].name))
			return i;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",p[i].name);
		p[i].money=0;
	}
	while(1){
		char tmp[20]="\0";int pr,m,t;
		if(!~scanf("%s%d%d",tmp,&m,&t))break;
		pr=search(tmp);
		for(int i=1;i<=t;i++){
			scanf("%s",tmp);
			int gpr=search(tmp);
			p[pr].money-=m/t;
			p[gpr].money+=m/t;
		}
	}
	for(int i=1;i<=n;i++)
		printf("%s %d\n",p[i].name,p[i].money);
}
