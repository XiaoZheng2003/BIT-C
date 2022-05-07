#include<stdio.h>
int main()
{
	int n,m=1,i;
	scanf("%d",&n);
	for(i=n-1;i;i--){
		m+=i;
		m*=2; 
	}
	if(m==1)printf("The monkey got 1 peach in first day.\n");
	else	printf("The monkey got %d peaches in first day.\n",m);
}
