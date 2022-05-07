#include<stdio.h>
int main()
{
	int ansp,ansh=0;
	for(int i=1;i<=7;i++){
		int h1,h2;
		scanf("%d%d",&h1,&h2);
		if(h1+h2>ansh)	ansp=i,ansh=h1+h2;
	}
	printf("%d\n",ansh>9?ansp:0);
}
