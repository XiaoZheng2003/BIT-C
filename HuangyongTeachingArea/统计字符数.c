#include<stdio.h>
int main()
{
	int ans=0;
	while(1){
		char t=getchar();
		if(t=='x'){
			printf("%d\n",ans);
			return 0;
		}
		if(t>='0'&&t<='9')	ans++;
	}
}
