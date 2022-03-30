#include<stdio.h>
int main()
{
	int i=3;
	for(;i;i--){
		int op;double c;
		scanf("%d%lf",&op,&c);
		if(op==2)
			printf("The Fahrenheit is %.2lf\n",1.8*c+32);	
		else if(op==1)
			printf("The Centigrade is %.2lf\n",(c-32)/1.8);
		else
			puts("Wrong input!");
	}
}
