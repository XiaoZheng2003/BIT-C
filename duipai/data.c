#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main()  
{  
    srand(time(0));
    printf("%d %d\n",rand()%10+1,rand()%10+1);
    return 0;  
} 
