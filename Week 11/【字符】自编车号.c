#include<stdio.h>
#define F {puts("no.");return 0;}
int IsUpperLetter(char c){return c>='A'&&c<='Z';}
int IsDigit(char c){return c>='0'&&c<='9';}
int main()
{
	int cnt=0;
	char str[10];
	scanf("%s",str);
	if(!IsDigit(str[4]))	F;
	for(int i=0;i<4;i++){
		if(str[i]=='I'||str[i]=='O')	F;
		if(IsUpperLetter(str[i]))		cnt++;
	}
	if(cnt!=2)	F;
	puts("ok.");
}
