#include<stdio.h>
#include<string.h>
int isdigit(int c){return c>='0'&&c<='9';}
int scan(char str[]){
	int n=strlen(str),p=0;
	for(int i=0;i<n;i++)
		p=p*10+str[i]-'0';
	return p;
}
int main()
{
	int num[100],cnt=0;
	char str[10];
	while(~scanf("%s",str)){
		if(isdigit(str[0]))
			num[++cnt]=scan(str);
		else{
			switch(str[0]){
				case '+':num[cnt-1]+=num[cnt];break;
				case '-':num[cnt-1]-=num[cnt];break;
				case '*':num[cnt-1]*=num[cnt];break;
				case '/':num[cnt-1]/=num[cnt];break;
			}
			cnt--;
		}
	}
	printf("%d\n",num[1]);
}
