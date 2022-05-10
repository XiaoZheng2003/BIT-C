#include<stdio.h>
#include<string.h>
char word[5000][100];
int cnt,flag;
int IsLetter(char ch){return ch>='a'&&ch<='z'||ch>='A'&&ch<='Z';}
int main()
{
	int ch,t=0;
	char tmp[100]="\0";
	while(ch=getchar()){
		if(ch==EOF)	break;
		if(!IsLetter(ch)){
			if(flag){
				int f=0;
				for(int i=1;i<=cnt;i++)
					if(!strcmp(tmp,word[i])){
						printf("%d",i);
						f=1;break;
					}
				if(!f){
					printf("%s",tmp);
					strcpy(word[++cnt],tmp);
				}
				flag=0;
				memset(tmp,0,sizeof(tmp));
			}
			putchar(ch);
			t=0;
		}
		else{
			tmp[t++]=ch;
			flag=1;
		}
	}
}
