#include<stdio.h>
int a[100],b[100];
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
void print(int n)
{
	putchar(' ');
	switch(n/14){
		case 0:putchar('C');break;
		case 1:putchar('D');break;
		case 2:putchar('S');break;
		case 3:putchar('H');break;
	}
	n%=14;
	if(n<10)	printf("%d",n+1);
	switch(n){
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
		if(trans1(t)<0||trans2(tt)<0){puts("Input Error!");return 0;}
		p=trans1(t)*14+trans2(tt); 
		if(a[p]){puts("Input Error!");return 0;}
		a[p]=1;
	}
	for(int i=0;i<3;i++){
		do{t=getchar();}while(t==' '||t=='\n');scanf("%s",tt);
		if(trans1(t)<0||trans2(tt)<0){puts("Input Error!");return 0;}
		p=trans1(t)*14+trans2(tt); 
		if(b[p]){puts("Input Error!");return 0;}
		b[p]=1;
	}
	int flag=0;
	for(int i=55;i;i--)
		if(a[i]&&!b[i]){puts("Winner is A!");flag=1;break;}
		else if(!a[i]&&b[i]){puts("Winner is B!");flag=1;break;}
	if(!flag)	puts("Winner is X!");
	printf("A:");
	for(int i=55;i;i--)
		if(a[i])	print(i);
	printf("\nB:");
	for(int i=55;i;i--)
		if(b[i])	print(i);
	putchar('\n');
}
