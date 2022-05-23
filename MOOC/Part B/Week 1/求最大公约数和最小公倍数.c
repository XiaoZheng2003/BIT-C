#include<stdio.h>
int fun1(int a,int b){
	for(int i=a<b?a:b;;i--)
		if(!(a%i)&&!(b%i))
			return i;
}
int fun2(int a,int b){
	for(int i=a>b?a:b;;i++)
		if(!(i%a)&&!(i%b))
			return i;
}
int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("最大公约数：%d\n最小公倍数：%d\n",fun1(a,b),fun2(a,b));
}
