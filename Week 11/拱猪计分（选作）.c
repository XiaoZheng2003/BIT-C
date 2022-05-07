#include<stdio.h>
#include<string.h>
//S12 H1-13 D11 C10
const int w[]={-100,-50,-2,-3,-4,-5,-6,-7,-8,-9,-10,-20,-30,-40,100,50};
int isdigit(int c){return c>='0'&&c<='9';}
int getint(){
    int p=0;char ch;
    for(;!isdigit(ch);ch=getchar());
    for(;isdigit(ch);ch=getchar()) p=p*10+ch-'0';
    return p;
}
int init(int card[],int *p){
	int t=getint(),f=t;
	while(t--){
		char c=getchar();
		while(c<'A'||c>'Z') c=getchar();
		int num=getint();
		switch(c){
			case 'S':
				if(num==12){
					card[0]=1;
					(*p)++;
				}
				break;
			case 'H':
				card[num]=1;
				(*p)++;
				break;
			case 'D':
				if(num==11){
					card[14]=1;
					(*p)++;
				}
				break;
			case 'C':
				if(num==10){
					card[15]=1;
					(*p)++;
				}
				break;
		}
	}
	return f;
}
int main()
{
	while(1){
		int player[4][20]={0},pc[4]={0},score[4]={0},f=0;
		for(int i=0;i<4;i++)
			f+=init(player[i],&pc[i]);
		if(!f)	break;
		int p_c10=-1,p_h=-1;
		for(int i=0;i<4;i++){
			int cnt=0;
			for(int j=1;j<14;j++)
				if(player[i][j])	cnt++;
				else	break;
			if(cnt==13){
				p_h=i;
				break;
			}
		}
		for(int i=0;i<4;i++)
			if(player[i][15]){
				p_c10=i;
				break;
			}
		if(~p_h){
			score[p_h]=200;
			if(player[p_h][0]&&player[p_h][14])	score[p_h]=500;
			else	score[p_h]+=w[0]*player[p_h][0]+w[14]*player[p_h][14]; 
		}
		for(int i=0;i<4;i++){
			if(i==p_h)	continue;
			for(int j=0;j<15;j++)
				score[i]+=w[j]*player[i][j];
		}
		if(~p_c10)
			if(pc[p_c10]>1)	score[p_c10]<<=1;
			else	score[p_c10]=50;
		for(int i=0;i<4;i++){
			char c=i<3?' ':'\n';
			if(score[i]>0)
				printf("+%d%c",score[i],c);
			else
				printf("%d%c",score[i],c);
		}
	}
}
