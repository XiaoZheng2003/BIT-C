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
	printf("���Լ����%d\n��С��������%d\n",fun1(a,b),fun2(a,b));
}
