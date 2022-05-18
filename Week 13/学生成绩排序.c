#include<stdio.h>
void getstr(char *p){
	char tmp=0;
	while(tmp!=',')
		*(p++)=tmp=getchar();
	*(p-1)=0;
} 
struct student{
	int score,id;
	char name[25];
}stu[100];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		getstr(stu[i].name);
		scanf("%d\n",&stu[i].score);
		stu[i].id=i;
	}
	for(int i=1;i<=n;i++){
		int maxn=i;
		for(int j=i+1;j<=n;j++)
			if(stu[j].score>stu[maxn].score||
			   (stu[j].score==stu[maxn].score&&
			    stu[j].id<stu[maxn].id))
				maxn=j;
		if(maxn!=i)
			stu[0]=stu[i],stu[i]=stu[maxn],stu[maxn]=stu[0];
	}
	for(int i=1;i<=n;i++)
		printf("%s,%d\n",stu[i].name,stu[i].score);
}
