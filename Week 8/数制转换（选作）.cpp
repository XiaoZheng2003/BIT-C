#include<math.h>
#include<stdio.h>
#include<string.h>
int isdigit(int a){return a>='0'&&a<='9';}
void getint(int &b,char *c){
	scanf("%s",c);
    char maxch=0;
    for(int i=0;i<strlen(c);i++)
		maxch=c[i]>maxch?c[i]:maxch;
	if(isdigit(maxch))	b=maxch-'0'+1;
	else	b=maxch-'A'+11;
}
int tran(char *c,int base){
	int ans=0,n=strlen(c);
	for(int i=0;i<n;i++)
		if(isdigit(c[n-i-1]))
			ans+=(c[n-i-1]-'0')*pow(base,i);
		else
			ans+=(c[n-i-1]-'A'+10)*pow(base,i);
	return ans;
}
int main()
{
	int mb,nb;
	char cm[100],cn[100];
	getint(mb,cm);getint(nb,cn);
	for(int i=mb;i<=36;i++){
		int am=tran(cm,i);
		for(int j=nb;j<=36;j++){
			int an=tran(cn,j);
			if(am==an){
				printf("%s (base %d) = %s (base %d)\n",cm,i,cn,j);
				return 0;
			}
		}
	}
	printf("%s is not equal to %s in any base 2..36\n",cm,cn);	
}
