#include<stdio.h>
int main()
{
	char filename[100];
	gets(filename);
	FILE *fp;
	if((fp=fopen(filename,"r"))==NULL){
		puts("File Name Error.");
		return 0; 
	}
	int line;
	scanf("%d",&line);
	if(line<1){
		puts("Line No Error.");
		return 0;
	}
	char str[105]="\0";
	for(int i=1;i<=line;i++)
		if(fgets(str,100,fp)==NULL){
			puts("Line No Error.");
			return 0;
		}
	printf("%s",str);
}
