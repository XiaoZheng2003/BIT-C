#include<stdio.h>
#include<string.h>
int cnt[1005],id[1005];
char name[1005][25],num[15000]; 
int cmp(int a,int b){
	int n1=strlen(num+cnt[a]),n2=strlen(num+cnt[b]);
	if(n1!=n2)	return n1<n2;
	for(int i=0;i<n1;i++)
		if(num[cnt[a]+i]!=num[cnt[b]+i])
			return num[cnt[a]+i]<num[cnt[b]+i];
	return strcmp(name[id[a]],name[id[b]])>0;
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(name[i]);
		gets(num+cnt[i]);
		cnt[i+1]=cnt[i]+strlen(num+cnt[i])+1;
		id[i]=i;
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(cmp(i,j)){
				int tmp=cnt[i];cnt[i]=cnt[j];cnt[j]=tmp;
				tmp=id[i];id[i]=id[j];id[j]=tmp;
			}
	for(int i=0;i<n;i++)
		puts(name[id[i]]);
}
