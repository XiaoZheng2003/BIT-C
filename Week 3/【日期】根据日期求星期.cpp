#include<stdio.h>
const int t[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
int main()
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	d+=t[m];
	if(m>2&&(!(y%400)||(!(y%4)&&y%100))) d++;
	d+=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
	printf("%d\n",d%7);
}
