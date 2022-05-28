#include<stdio.h>
void filltab(int n){
	for(int i=0;i<n;i++)
		printf("    ");
}
int main()
{
	int t=0,inFor=0,n;
	char str[10000]="\0";
	for(n=0;(str[n]=getchar())!=EOF;n++)
		if(str[n]=='\n')	n--;
	for(int i=0;i<n;i++)
		switch(str[i]){
			case '>':
				putchar(str[i]);putchar('\n');
				break;
			case '{':
				if(str[i-1]!='{'&&str[i-1]!=';'){
					putchar('\n');filltab(t);}
				printf("{\n");t++;filltab(t);
				break;
			case '}':
				putchar('\n');t--;filltab(t);putchar('}');
				if((str[i-1]==';'||str[i-1]=='}')&&str[i+1]!='}'){
					putchar('\n');filltab(t);}
				break;
			case ';':
				putchar(';');
				if(inFor)	inFor--;
				else if(str[i+1]!='}'){
					putchar('\n');filltab(t);}
				break;
			case 'f':
				if(str[i+1]=='o'&&str[i+2]=='r')
					inFor=2;
				putchar('f');
				break;
			default:
				putchar(str[i]);
		}
}
