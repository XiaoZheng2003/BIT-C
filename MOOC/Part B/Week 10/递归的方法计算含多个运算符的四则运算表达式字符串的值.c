#include<stdio.h>
int calc(int num,int flag){
	int t,p;char op;
	if(!flag)	scanf("%d",&t);
	else	t=num;
	if((op=getchar())=='\n')	return t;
	switch(op){
		case '+':return t+calc(0,0);
		case '-':return t-calc(0,0);
		case '*':
			scanf("%d",&p);
			return calc(t*p,1);
		case '/':
			scanf("%d",&p);
			return calc(t/p,1);
	}
}
int main()
{
	printf("%d\n",calc(0,0)); 
}
