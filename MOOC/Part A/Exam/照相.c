#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];gets(str);
	int n=strlen(str),cnt[128]={0},pos[128]={0};
	for(int i=0;i<n;i++){
		cnt[str[i]]++;
		pos[str[i]]=i;
	}
	for(int i=0;i<n;i++){
		if(pos[str[i]]==i&&cnt[str[i]]>1)
			printf("%d",cnt[str[i]]);
		else
			putchar(str[i]);
	}
}
