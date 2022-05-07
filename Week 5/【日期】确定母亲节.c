#include<stdio.h>
int main()
{
	int y,d=121;
	scanf("%d",&y);
	if(!(y%400)||(!(y%4)&&y%100)) d++;
	d+=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
	printf("%d\n",d%7?15-d%7:8);
}
