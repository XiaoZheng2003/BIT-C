#include<stdio.h>
#include<string.h>
const char map[2][10]={"abcdeik;w","dwk;iabce"};
int main()
{
	char str[100];gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++)
		for(int j=0;j<9;j++)
			if(str[i]==map[0][j]){
				str[i]=map[1][j];
				break;
			}
	puts(str);
}
