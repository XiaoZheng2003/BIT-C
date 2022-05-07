#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<windows.h>
const char o[5]={'+','-','*','/'};
int main()  
{  
    srand(time(0));
    printf("%d/%d %c %d/%d",rand()%100,rand()%100,o[rand()%4],rand()%100,rand()%100);
    return 0;  
} 
