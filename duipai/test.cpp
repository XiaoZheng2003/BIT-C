#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,n;
	char x;
	scanf("%d/%d %c %d/%d",&a,&b,&x,&c,&d);
	if(x==43)
	{
		e=a*d+b*c;
		f=b*d;
	}
	else if(x==45)
	{
		e=a*d-b*c;
		f=b*d;
	}
	else if(x==42)
	{
		e=a*c;
		f=b*d;
	}
	else if(x==47)
	{
		e=a*d;
		f=b*c;
	}
	n=2;
	while(n<e||n<f)
	{
		if(e%n==0&&f%n==0)
		{
		e=e/n;
		f=f/n;
		}
		else
		n=n+1;
	}
	if(e==0)
	printf("%d/%d %c %d/%d = 0\n",a,b,x,c,d);
	else if(f>0)
	{
		if(f==1)
		printf("%d/%d %c %d/%d = %d\n",a,b,x,c,d,e);
		else
		printf("%d/%d %c %d/%d = %d/%d\n",a,b,x,c,d,e,f);
	}
	else if(f<0)
	{
		if(f==-1)
		printf("%d/%d %c %d/%d = %d\n",a,b,x,c,d,-e);
		else
		printf("%d/%d %c %d/%d = %d/%d\n",a,b,x,c,d,-e,-f);
	}
}
