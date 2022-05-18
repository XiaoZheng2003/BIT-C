#include<stdio.h>
struct card{int color,num;}A[3],B[3];
int trans1(char ch){
	switch(ch){
		case 'H':return 3;
		case 'S':return 2;
		case 'D':return 1;
		case 'C':return 0; 
	}
	return -1;
}
//ps:红桃 3>黑桃 2>方块 1>梅花 0，返回-1代表输入非法 
int trans2(char *p){
	if(p[0]=='1'&&p[1]=='0')	return 9;
	if(p[0]>'1'&&p[0]<='9')		return p[0]-'0'-1;
	switch(p[0]){
		case 'J':return 10;
		case 'Q':return 11;
		case 'K':return 12;
		case 'A':return 13;
	}
	return -1;
}
//ps:2~10返回1~9，JQKA分别10~13，返回-1代表输入非法 
void print(struct card c)
{
	putchar(' ');
	switch(c.color){
		case 0:putchar('C');break;
		case 1:putchar('D');break;
		case 2:putchar('S');break;
		case 3:putchar('H');break;
	}
	if(c.num<10)	printf("%d",c.num+1);
	switch(c.num){
		case 10:putchar('J');break;
		case 11:putchar('Q');break;
		case 12:putchar('K');break;
		case 13:putchar('A');break;
	}
}
int main()
{
	char t,tt[3],p;
	for(int i=0;i<3;i++){
		do{t=getchar();}while(t==' '||t=='\n');scanf("%s",tt);
		if((A[i].color=trans1(t))<0||(A[i].num=trans2(tt))<0)
		{puts("Input Error!");return 0;}
		for(int j=0;j<i;j++)
			if(A[i].color==A[j].color&&A[i].num==A[j].num)
			{puts("Input Error!");return 0;}
	}
	for(int i=0;i<3;i++){
		do{t=getchar();}while(t==' '||t=='\n');scanf("%s",tt);
		if((B[i].color=trans1(t))<0||(B[i].num=trans2(tt))<0)
		{puts("Input Error!");return 0;}
		for(int j=0;j<i;j++)
			if(B[i].color==B[j].color&&B[i].num==B[j].num)
			{puts("Input Error!");return 0;}
	}
	for(int i=0;i<2;i++)
		for(int j=i+1;j<3;j++)
			if(A[i].color<A[j].color||A[i].color==A[j].color&&A[i].num<A[j].num){
				struct card tmp=A[i];A[i]=A[j];A[j]=tmp;
			}
	for(int i=0;i<2;i++)
		for(int j=i+1;j<3;j++)
			if(B[i].color<B[j].color||B[i].color==B[j].color&&B[i].num<B[j].num){
				struct card tmp=B[i];B[i]=B[j];B[j]=tmp;
			}
	int flag=0;
	for(int i=0;i<3;i++)
		if(A[i].color>B[i].color||A[i].color==B[i].color&&A[i].num>B[i].num)
			{puts("Winner is A!");flag=1;break;}
		else if(A[i].color<B[i].color||A[i].color==B[i].color&&A[i].num<B[i].num)
			{puts("Winner is B!");flag=1;break;}
	if(!flag)puts("Winner is X!");
	printf("A:");
	for(int i=0;i<3;i++)
		print(A[i]);
	printf("\nB:");
	for(int i=0;i<3;i++)
		print(B[i]);
	putchar('\n');
}
