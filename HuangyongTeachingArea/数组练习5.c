#include<stdio.h>
int A[105][105],B[105][105],C[105][105];
int isdigit(char ch){return ch>='0'&&ch<='9';}
int getint(){
    int flag=1,p=0;char ch;
    for(;!isdigit(ch);ch=getchar()) if(ch=='-') flag=-1;
    for(;isdigit(ch);ch=getchar()) p=p*10+ch-'0';
    return p*flag;
}
int main()
{
	int m=getint(),k=getint(),n=getint();
	char s[2]="\0";
	for(int i=1;i<=m;i++)
		for(int j=1;j<=k;j++)
			A[i][j]=getint();
	for(int i=1;i<=k;i++)
		for(int j=1;j<=n;j++)
			B[i][j]=getint();
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			for(int p=1;p<=k;p++)
				C[i][j]+=A[i][p]*B[p][j];
	putchar('[');
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++)
			printf("%s%d",s,C[i][j]),s[0]=' ';
		if(i<m)	putchar(';');
	}
	printf("]\n");
}
