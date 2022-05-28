#include<stdio.h>
const int md[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
const int rt[5][2]={{3,8},{4,9},{5,0},{1,6},{2,7}};
int leap_year(int y){return (!(y%4)&&y%100)||!(y%400);}
int days(int y,int m,int d){
	if(leap_year(y)&&m>2)	d++;
	for(int i=1;i<m;i++)	d+=md[i];
	return d;
}
int main()
{
	int y,d,m;
	scanf("%d%d%d",&y,&m,&d);
	int p=days(y,m,d)-days(2012,4,8);
	for(int i=2012;i<y;i++)
		p+=leap_year(i)?366:365;
	int r=p/7/13%5,t=p%7;
	if(!t||t>5)	puts("Free.");
	else	printf("%d and %d.\n",rt[(t-r+4)%5][0],rt[(t-r+4)%5][1]);
}
