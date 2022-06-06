#include<stdio.h>
int countsub(char *str,char *ss);
int main()
{
    char s1[1000]={0},s2[100]={0};
    gets(s1);
    gets(s2);
    printf("%d\n",countsub(s1,s2));
}
#include<string.h>
int countsub(char *str,char *ss){
	int n=strlen(str),m=strlen(ss),t=0,max=0;
	for(int i=0;i<=n-m;i++){
		int flag=1;
		for(int j=0;j<m;j++)
			if(str[i+j]!=ss[j]){
				flag=0;
				break;
			}
		if(flag){
			t++;
			max=t>max?t:max;
			i+=m-1;
		}
		else	t=0;
	}
	return max;
}
