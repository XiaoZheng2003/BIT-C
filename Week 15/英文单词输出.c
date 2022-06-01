#include<stdio.h>
#include<string.h>
int main()
{
	char word[25][25];
	int n=0;
	while(~scanf("%s",word[n++]));n--;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp(word[i],word[j])>0){
				char tmp[25];
				strcpy(tmp,word[i]);
				strcpy(word[i],word[j]);
				strcpy(word[j],tmp);
			}
	for(int i=0;i<n;i++){
		printf("%s",word[i]);
		if(i<n-1)	putchar(' '); 
	}
	putchar('\n');
}
