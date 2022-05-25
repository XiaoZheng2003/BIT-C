#include<stdio.h>
struct student{
	int id,score[3],sum;
};
int main()
{
	struct student s[3]={{1,90,80,70},{2,85,75,95},{3,88,84,65}},m={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			s[i].sum+=s[i].score[j];
		if(s[i].sum>m.sum)	m=s[i];
	}
	char c=getchar();
	if(c=='m')	printf("%d\n",m.id);
	else{
		int id=c-'0';
		for(int i=0;i<3;i++)
			if(id==s[i].id){
				printf("%d\n",s[i].sum/3);
				return 0;
			}
		puts("0");
	}
}
