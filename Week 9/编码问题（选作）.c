#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,a[15],b[15];
	scanf("%d%d",&t,&n);t--;
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	if(t){
		for(int i=n-1;i>0;i--)
			for(int j=n;j;j--){
				int cnt=0;
				for(int k=1;k<j;k++)
					if(a[k]>=0)	cnt++;
				if(a[j]==cnt){b[j]=i;a[j]=-1;break;}
				if(j==1){b[j]=i;a[j]=-1;}
			}
	}
	else{
		for(int i=1;i<=n;i++)
			for(int j=1;j<i;j++)
				if(a[j]<a[i])
					b[i]++;
	}
	char s[2]="\0";
	for(int i=1;i<=n;i++)
		printf("%s%d",s,b[i]),s[0]=' ';
	putchar('\n');
}
