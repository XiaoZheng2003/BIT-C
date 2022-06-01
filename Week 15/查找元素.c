//注释部分为前置代码 
/*
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data; 
    struct node *next; 
}NODE;
NODE* findelement(NODE *head);
int main() 
{
	NODE *head=(NODE*)malloc(sizeof(NODE));
	head->data=0;
	head->next=NULL;
	int n,x;
	scanf("%d",&n);
	NODE *pre=head;
	while(n--){
		scanf("%d",&x);
		NODE* cnt=(NODE*)malloc(sizeof(NODE));
		cnt->data=x;
		cnt->next=NULL;
		pre->next=cnt;
		pre=cnt;
	}
	NODE *pos=findelement(head);
	if(pos==NULL) puts("No such element.");
	else printf("%d\n",pos->data);
	return 0;
}
*/
NODE* findelement(NODE *head){
	NODE *p=head;
	while(p->next->next!=NULL)
		p=p->next;
	if(p==head)	return NULL;
	return p;
}
