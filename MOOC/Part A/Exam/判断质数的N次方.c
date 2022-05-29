#include<math.h>
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=8;i++){
		double t=pow(n,1.0/i);
		int tt=(int)t;
		if(fabs(t-tt<1e-8)){
			for(i=tt;i>1;i--){
				int flag=0;
				for(int j=2;j<i/2;j++)
					if(!(i%j)){
						flag=1;
						break;
					}
				if(!flag){
					puts("Yes");
					return 0;
				}
			}
		}
	}
	puts("No");
}
