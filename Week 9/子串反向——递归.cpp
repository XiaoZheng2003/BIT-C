#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char str[],int l,int r){
	if(r>=strlen(str))	r=strlen(str)-1;
	if(l>=r)	return;
	char t=str[l];str[l]=str[r];str[r]=t;
	reverse(str,l+1,r-1);
}
int main( )
{
	char str[100];
	int start,end;
	gets(str);
	scanf("%d%d",&start,&end);
	reverse(str,start,end);
	printf("%s\n",str);
	return 0;
}
