#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
typedef struct node NODE;
const char str[]="abcdcba";
int isdigit(int a){return a>='0'&&a<='9';}
int main()
{
	NODE *head,*t;
	head=(NODE*)malloc(sizeof(NODE));
	head->data=0;head->next=NULL;t=head;
	for(int i=0;str[i];i++){
		NODE *p;
		p=(NODE*)malloc(sizeof(NODE));
		p->data=str[i];p->next=NULL;
		t->next=p;t=t->next;
	}
	char ch[10];gets(ch);
	if(isdigit(ch[0])){
		int n=atoi(ch);
		for(t=head->next;t->next!=NULL&&n;t=t->next,n--);
		if(t->next!=NULL||!n)	printf("%c\n",t->data);
		else puts("N");
	}
	else{
		int ans=-1,i;
		for(t=head->next,i=0;t!=NULL;t=t->next,i++)
			if(t->data==ch[0])	ans=i;
		if(~ans)	printf("%d\n",ans);
		else puts("N");
	}
}
