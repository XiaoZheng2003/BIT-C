#include<stdio.h>
int main()
{
	char t;
	int ans=0;
	while(1){
		t=getchar();
		if(t=='x'){
			printf("%d\n",ans);
			return 0;
		}
		if(t>='0'&&t<='9')	ans++;
	}
}
