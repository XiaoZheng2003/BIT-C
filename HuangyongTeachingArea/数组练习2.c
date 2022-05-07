#include<stdio.h>
int letter[30];
int main()
{
	char t,_int[105],cnt1=0,cnt2=0;
	while(t=getchar()){
		if(t=='\\')	break;
		if(t>='0'&&t<='9')	_int[cnt1++]=t;
		else if(t>='a'&&t<='z')	letter[t-'a']++,cnt2++;
	}
	printf("Integer %d:",cnt1);
	for(int i=0;i<cnt1;i++)
		printf(" %c",_int[i]);
	printf("\nLetter %d:",cnt2);
	for(int i=0;i<26;i++)
		while(letter[i]--)
			printf(" %c",i+'a');
	putchar('\n');
} 
