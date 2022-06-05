#include<stdio.h>
int main()
{
	char str[1005];
	int cnt=0;
	gets(str);
	while(str[cnt]){
		if(str[cnt]=='n'){
			if(str[cnt-1]!='n')
				putchar('\n');
		}
		else	putchar(str[cnt]);
		cnt++;
	}
}
