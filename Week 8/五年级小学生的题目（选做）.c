#include<stdio.h>
const char op[7]="\0-+*/%";
int ft;
int isdigit(int a){return a>='0'&&a<='9';}
int getint(){
    int flag=1,p=0;char ch;
    ch=getchar();
	switch(ch){
		case '-':flag=-1;break;
		case '+':flag=2;break;
		case '*':flag=3;break;
		case '/':flag=4;break;
		case '%':flag=5;break;
	}
	if(flag!=1)	ch=getchar();
	for(;isdigit(ch);ch=getchar())
		p=p*10+ch-'0';
	if(!p){
		if(flag==1)	return 0;
		ft=1;return flag;
	}
    return p*flag;
}
int main()
{
	int min=1<<31-1,max=-(1<<31-1); 
	while(1){
		int t=getint();
		if(ft){
			if(t==-1)	t=1;
			if(max<0)		printf("(%d) %c (%d) = ",max,op[t],min);
			else if(min<0)	printf("%d %c (%d) = ",max,op[t],min);
			else			printf("%d %c %d = ",max,op[t],min);
			switch(t){
				case 1:printf("%d\n",max-min);break;
				case 2:printf("%d\n",max+min);break;
				case 3:printf("%d\n",max*min);break;
				case 4:printf("%d\n",max/min);break;
				case 5:printf("%d\n",max%min);break;
			}
			return 0;
		}
		min=t<min?t:min;
		max=t>max?t:max;
	}
}
