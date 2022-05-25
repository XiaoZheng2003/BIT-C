#include<stdio.h>
struct nn{
	int no;
	int num;
};
typedef struct nn DATA;
int number(char *,DATA []);
int main()
{
	DATA b[100];
	char sa[500];
	int i,n;
	gets(sa);
	n=number(sa,b);
	for(i=0;i<n;i++)
		printf("%d %d\n",b[i].num,b[i].no);
	return 0;
}
int isdigit(int n){return n>='0'&&n<='9';}
int number(char *str,DATA a[]){
	int i=0,cnt=0;
	while(1){
		a[cnt].num=0;int flag=1;
		if(str[i]=='-')	flag=-1,i++;
		while(isdigit(str[i])){
			a[cnt].num=a[cnt].num*10+str[i]-'0';
			i++;
		}
		a[cnt].num*=flag;a[cnt].no=1;cnt++;
		if(!str[i])	break;
		i++;
	}
	for(i=0;i<cnt;i++)
		for(int j=0;j<cnt;j++)
			if(a[i].num>a[j].num||(a[i].num==a[j].num&&i>j))
				a[i].no++;
	return cnt;
}
