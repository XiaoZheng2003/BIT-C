#include<stdio.h>
int odd[5005],even[5005],cnt1,cnt2;
int main()
{
	int t;
	while(~scanf("%d",&t)){
		if(t%2)	odd[++cnt1]=t;
		else even[++cnt2]=t;
	}
	char s[2]="\0";
	for(int i=1;i<=cnt1;i++)
		printf("%s%d",s,odd[i]),s[0]=' ';
	for(int i=1;i<=cnt2;i++)
		printf("%s%d",s,even[i]),s[0]=' ';
	putchar('\n');
}
