#include<stdio.h>
const int t[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
int main()
{
	int y,m,d=13,cnt=0,ans[15];
	scanf("%d",&y);
	for(m=1;m<=12;m++,d=13){
		d+=t[m];
		if(m>2&&(!(y%400)||(!(y%4)&&y%100))) d++;
		d+=(y-1)*365+(y-1)/4-(y-1)/100+(y-1)/400;
		if(d%7==5)	ans[++cnt]=m;
	}
	if(cnt==1)	printf("There is 1 Black Friday in year %d.\nIt is:\n",y);
	else printf("There are %d Black Fridays in year %d.\nThey are:\n",cnt,y);
	for(int i=1;i<=cnt;i++)
		printf("%d/%d/13\n",y,ans[i]); 
}
