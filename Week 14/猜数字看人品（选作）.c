#include<stdio.h>
int main()
{
	int l=0,r=11;
	while(1){
		int num;
		scanf("%d",&num);getchar();
		if(!num)	break;
		char str[15];
		gets(str);
		switch(str[4]){
			case 'l':
				if(num>l)
					l=num;
				break;
			case 'h':
				if(num<r)
					r=num;
				break;
			case 't':
				if(num>l&&num<r)
					puts("Tom may be honest");
				else
					puts("Tom is dishonest");
				l=0;r=11;
		}
	}
}
