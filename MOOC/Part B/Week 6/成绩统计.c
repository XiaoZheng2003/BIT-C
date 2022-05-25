#include<stdio.h>
struct stu{
	char name[10];
	int score[4];
	int sum;
};
void printnum(int sum){
	if(sum%4)	printf("%.2lf",sum/4.0);
	else		printf("%d",sum/4);
}
void print(char *str,int sum){
	printf("%s,",str);
	printnum(sum);
	putchar('\n');
}
int main()
{
	struct stu s[4]={
		{"wanglei",78,90,87,92},
		{"lihong",88,91,89,78},
		{"zhangli",84,76,83,75},
		{"liuming",88,90,71,83}};
	int sum[4]={0};
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++){
			sum[i]+=s[j].score[i];
			s[j].sum+=s[j].score[i];
		}
	for(int i=0;i<4;i++)
		print(s[i].name,s[i].sum);
	printf("AVERAGE:");
	for(int i=0;i<4;i++){
		printnum(sum[i]);
		if(i<3)	putchar(',');
	}
	putchar('\n');
}
