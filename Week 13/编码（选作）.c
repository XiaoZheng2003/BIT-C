#include<stdio.h>
#include<string.h>
int c[30][30];
int C(int n,int m){
	if(!m||n==m)	return 1;
	return c[n][m]?c[n][m]:(c[n][m]=C(n-1,m)+C(n-1,m-1));
} 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		char str[15];
		scanf("%s",str);
		int n=strlen(str),ans=1,flag=0;
		for(int i=1;i<n;i++)
			if(str[i-1]>=str[i]){
				puts("0");
				flag=1;
				break;
			}
		if(flag)	continue;
		for(int i=1;i<n;i++)
			ans+=C(26,i);
		for(int i=0;i<n;i++){
			char ch=(!i)?'a':str[i-1]+1;
			while(ch<=str[i]-1){
				ans+=C('z'-ch,n-1-i);
				ch++;
			}
		}
		printf("%d\n",ans);
	}
}
