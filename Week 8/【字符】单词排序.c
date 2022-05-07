#include<stdio.h>
#include<string.h>
char str[5][100],tmp[100];
int main()
{
	for(int i=0;i<5;i++)
		gets(str[i]);
	for(int i=0;i<5;i++)
		for(int j=i;j<5;j++)
			if(strcmp(str[i],str[j])<0){
				strcpy(tmp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],tmp);
			}
	for(int i=0;i<5;i++)
		puts(str[i]);
}
