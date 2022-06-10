#include<stdio.h>
#include<string.h>
int isletter(int c){return (c>='a'&&c<='z')||(c>='A'&&c<='Z');}
int main()
{
	char str[100];
	gets(str);
	int n=strlen(str);
	if(!isletter(str[n-1]))	n--;
	for(int i=0;i<n/2;i++){
		int t=n-i-1;
		if(str[i]>str[t]){
			char tmp=str[i];
			str[i]=str[t];
			str[t]=tmp;
		}
	}
	printf("%s",str);
}
