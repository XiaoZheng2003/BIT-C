#include<stdio.h>
int main()
{
	int a,n,ans=1,flag=0;
	scanf("%d%d",&a,&n);
	while(n--){
		ans*=a;
		if(ans>=1000)	flag=1;
		ans%=1000;
	}
	if(flag)	printf("The last 3 numbers is %03d.\n",ans);
	else	printf("The last 3 numbers is %d.\n",ans); 
} 
