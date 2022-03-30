#include<stdio.h>
const int dd[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int y,m,d,t;
	scanf("%d%d%d%d",&y,&m,&d,&t);
	d+=t;
	while(1){
		if(m==2&&(!(y%400)||(!(y%4)&&y%100))&&d<30)	break;
		else if(d<=dd[m])	break;
		if((!(y%400)||(!(y%4)&&y%100))&&m==2)	d-=29;
		else	d-=dd[m];
		m++;
		if(m>12)	m=1,y++;
	}
	printf("%d.%d.%d\n",y,m,d);
}
