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
int check(){
	int aw,bw;
	//同花顺 
	for(int j=13;j>2;j--)
		for(int i=3;i>=0;i--){
			aw=a[i*14+j]&&a[i*14+j-1]&&a[i*14+j-2];
			bw=b[i*14+j]&&b[i*14+j-1]&&b[i*14+j-2];
			if(aw&&!bw)	return 1;
			if(!aw&&bw)	return 2;
			if(aw&&bw)	return 0;
		}
	//炸弹 
	for(int j=13;j;j--){
		aw=a[j]+a[j+14]+a[j+14*2]+a[j+14*3]>2;
		bw=b[j]+b[j+14]+b[j+14*2]+b[j+14*3]>2;
		if(aw&&!bw)	return 1;
		if(!aw&&bw)	return 2;
		if(aw&&bw){
			int ap,bp;
			ap=a[j+14]+a[j+14*2]*2+a[j+14*3]*3;
			bp=b[j+14]+b[j+14*2]*2+b[j+14*3]*3;
			if(ap>bp)	return 1;
			if(ap<bp)	return 2;
			return 0;
		}
	}
	//连牌
	for(int j=13;j>2;j--){
		int t,ca=1,cb=1,pa=0,pb=0;
		for(int i=0;i<3;i++){
			t=a[j-i]+a[j+14-i]+a[j+14*2-i]+a[j+14*3-i];
			pa+=a[j+14-i]+a[j+14*2-i]*2+a[j+14*3-i]*3;
			if(t!=1){ca=0;break;}
		}
		for(int i=0;i<3;i++){
			t=b[j-i]+b[j+14-i]+b[j+14*2-i]+b[j+14*3-i];
			pb+=b[j+14-i]+b[j+14*2-i]*2+b[j+14*3-i]*3;
			if(t!=1){cb=0;break;}
		}	
		if(ca&&!cb)	return 1;
		if(!ca&&cb)	return 2;
		if(ca&&cb){
			if(pa>pb)	return 1;
			if(pa<pb)	return 2;
			return 0;
		}
	}
	//对子
	for(int j=13;j;j--){
		aw=a[j]+a[j+14]+a[j+14*2]+a[j+14*3]>1;
		bw=b[j]+b[j+14]+b[j+14*2]+b[j+14*3]>1;
		if(aw&&!bw)	return 1;
		if(!aw&&bw)	return 2;
		if(aw&&bw){
			int ap,bp;
			ap=a[j+14]+a[j+14*2]*2+a[j+14*3]*3;
			bp=b[j+14]+b[j+14*2]*2+b[j+14*3]*3;
			if(ap>bp)	return 1;
			if(ap<bp)	return 2;
			return 0;
		}
	}
	//单牌		
	for(int j=13;j;j--){
		aw=a[j]+a[j+14]+a[j+14*2]+a[j+14*3];
		bw=b[j]+b[j+14]+b[j+14*2]+b[j+14*3];
		if(aw&&!bw)	return 1;
		if(!aw&&bw)	return 2;
		if(aw&&bw){
			int ap,bp;
			ap=a[j+14]+a[j+14*2]*2+a[j+14*3]*3;
			bp=b[j+14]+b[j+14*2]*2+b[j+14*3]*3;
			if(ap>bp)	return 1;
			if(ap<bp)	return 2;
			return 0;
		}
	}
	return 0;
}
//返回值1A赢，2B赢，3平 
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
	int res=check();
	if(!res)	puts("Draw!");
	else if(res==1)	puts("Winner is A!");
	else	puts("Winner is B!");
	printf("A:");
	for(int j=13;j;j--)
		for(int i=3;i>=0;i--)
			if(a[i*14+j])	print(i*14+j);
	printf("\nB:");
	for(int j=13;j;j--)
		for(int i=3;i>=0;i--)
			if(b[i*14+j])	print(i*14+j);
	putchar('\n');
}
