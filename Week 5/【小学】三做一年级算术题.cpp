#include<stdio.h>
int main()
{
	int max=-1,min=10;
	char t;
	while(~scanf("%c,",&t)){
		if(t>='0'&&t<='9'){
			max=t-'0'>max?t-'0':max;
			min=t-'0'<min?t-'0':min; 
			continue;
		}
		switch(t){
			case '+':printf("%d+%d=%d\n",max,min,max+min);break;
			case '-':printf("%d-%d=%d\n",max,min,max-min);break;
			case '*':printf("%d*%d=%d\n",max,min,max*min);break;
			case '/':
				if(!min){
					puts("Error!");
					return 0;
				}
				printf("%d/%d=%d\n",max,min,max/min);
				break;
			case '%':
				if(!min){
					puts("Error!");
					return 0;
				}
				printf("%d%%%d=%d\n",max,min,max%min);break;
		}
		return 0;
	}
}
