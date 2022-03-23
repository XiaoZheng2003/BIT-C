#include<stdio.h>
int check(int num){
	
}
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		if(!a&&!b) break;
		int i,c[5];
		for(i=a;i<=b;i++)
			if(check(i))
				printf("%d  ",i);
		
	}
}
