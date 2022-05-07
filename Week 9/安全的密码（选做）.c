#include<stdio.h>
#include<string.h>
int judge(char ch){
	if(ch>='0'&&ch<='9')	return 0;
	if(ch>='A'&&ch<='Z')	return 1;
	if(ch>='a'&&ch<='z')	return 2;
	return 3;
}
//Êý×Ö0 ´óÐ´×ÖÄ¸1 Ð¡Ð´×ÖÄ¸2 ÆäËü·ûºÅ3
int main()
{
	int n,len;
	char pwd[30];
	scanf("%d ",&n);
	while(n--){
		gets(pwd);len=strlen(pwd);
		if(len<6){puts("Not Safe");continue;}
		int type[4]={0,0,0,0};
		for(int i=0;i<len;i++)
			type[judge(pwd[i])]=1;
		for(int i=1;i<4;i++)	type[0]+=type[i];
		if(type[0]>2)	puts("Safe");
		else if(type[0]>1)	puts("Medium Safe");
		else puts("Not Safe");
	}
} 
