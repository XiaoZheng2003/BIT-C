#include<stdio.h>
#include<string.h>
int check(int num){
	int a[10],i;
	memset(a,0,sizeof(a));
	for(i=0;i<4;i++)
		if(!a[num%10]){
			a[num%10]=1;
			num/=10;
		}
		else return 0;
	return 1;
}
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		if(!a&&!b) break;
		if(a<1000||a>9999){
			puts("Error");
			continue;
		}
		if(b<1000||b>9999){
			puts("Error");
			continue;
		}
		int i,cnt=0,c[5];
		a=a%2?a+1:a;
		b=b%2?b-1:b;
		for(i=a;i<=b;i+=2)
			if(check(i)){
				printf("%d  ",i);
				cnt++;
			}
		printf("\ncounter=%d\n",cnt);
	}
}
