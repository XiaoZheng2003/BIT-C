#include<stdio.h>
int a1[100]={1},b1[100]={1},len=1;
int main()
{
	int a,b,n;
	scanf("%d%d",&a,&b);
	n=b-a+1;
	for(int i=3;i<=n;i++){
		for(int j=0;j<len;j++)
			if(i%2){
				a1[j]+=b1[j];
				if(a1[j]>9){
					a1[j+1]++;
					a1[j]%=10;
					if(j+1==len)
						len++;
				}
			}
			else{
				b1[j]+=a1[j];
				if(b1[j]>9){
					b1[j+1]++;
					b1[j]%=10;
					if(j+1==len)
						len++;
				}
			}
	}
	for(int i=len-1;i>=0;i--)
		if(n%2)	printf("%d",a1[i]);
		else	printf("%d",b1[i]);
	putchar('\n');
}
