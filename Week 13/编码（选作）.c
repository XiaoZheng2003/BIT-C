#include<stdio.h>
#include<string.h>
int C(int n,int m){
	int ans=1;
	for(int i=0;i<m;i++){
		ans*=26-i;
		ans/=i+1;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		char str[15];
		scanf("%s",str);
		int n=strlen(str),ans=0,cnt=0;
		for(int i=n-1;i>=0;i--)
			ans+=(str[i]-'a'+2+i-n)*(cnt+=C(26,i));
		printf("%d\n",ans);
	}
}
