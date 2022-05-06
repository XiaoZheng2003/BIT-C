#include<stdio.h>
#include<string.h>
const int pos[10]={125,80,55,87,90,79,111,84,127,95};
int main()
{
	char str[10];
	while(1){
		scanf("%s",str);int n=strlen(str);
		if(n==1&&str[0]=='0')	break; 
		for(int i=0;i<5-n;i++)
			printf("%X ",pos[0]);
		for(int i=0;i<n;i++)
			printf("%X%c",pos[str[i]-'0'],i<n-1?' ':'\n');
	}
}
