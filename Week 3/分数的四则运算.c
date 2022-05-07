#include<stdio.h>  
int min(int a,int b){return a<b?a:b;}
int abs(int a){return a>0?a:-a;}
int main()  
{  
    int a1,a2,b1,b2,c1,c2;  
    char op;  
    scanf("%d/%d %c %d/%d",&a1,&a2,&op,&b1,&b2);  
    switch(op){  
        case '+':c1=a1*b2+a2*b1;c2=a2*b2;break;  
        case '-':c1=a1*b2-a2*b1;c2=a2*b2;break;  
        case '*':c1=a1*b1;c2=a2*b2;break;  
        case '/':c1=a1*b2;c2=a2*b1;break;  
    }  
    int i,t=abs(min(c1,c2));  
    for(i=t;i>1;)  
        if(!(c1%i)&&!(c2%i)){  
            c1/=i;c2/=i;  
        }
        else i--;
    if(!c1){printf("%d/%d %c %d/%d = 0\n",a1,a2,op,b1,b2);return 0;}  
    if(c2==1){printf("%d/%d %c %d/%d = %d\n",a1,a2,op,b1,b2,c1);return 0;}  
    printf("%d/%d %c %d/%d = %d/%d\n",a1,a2,op,b1,b2,c1,c2);  
}
