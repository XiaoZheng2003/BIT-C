#include<stdio.h>
const int t[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int y,m,d,dt;
		scanf("%d%d%d",&y,&m,&d);
		dt=d;dt+=t[m];
		if(m>2&&(!(y%400)||(!(y%4)&&y%100))) dt++;
		dt+=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
		dt-=726468;dt%=5;	//��1��1��1�յ�1990��1��1��һ��726468�� 
		if(dt<3)	printf("He was fishing on %d.%d.%d\n",y,m,d);
		else	printf("He was basking on %d.%d.%d\n",y,m,d);
	}
}
