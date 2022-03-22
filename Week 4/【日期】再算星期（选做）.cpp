#include<stdio.h>
const int t[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
const int dd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	if(m>12||m<1){
		puts("month is error.");
		return 0;
	}
	if(d<1){
		puts("day is error.");
		return 0;
	}
	if(m==2){
		if(!(y%400)||(!(y%4)&&y%100)){
			if(d>29){
				puts("day is error.");
				return 0;
			}
		}
		else
			if(d>28){
				puts("day is error.");
				return 0;
			}
	}
	else{
		if(d>dd[m]){
			puts("day is error.");
			return 0;
		} 
	}
	d+=t[m];
	if(m>2&&(!(y%400)||(!(y%4)&&y%100))) d++;
	d+=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
	printf("%d\n",d%7);
}
