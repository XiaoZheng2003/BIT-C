#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
void outlist(PNODE);
void sortlist(PNODE h,char c);
int main()
{
	char c;
	PNODE head;
	head=(PNODE)malloc(sizeof(NODE));
	head->next=NULL;
	head->data=0;
	while(~scanf("%c",&c)){
		if(c==' '||c=='\n')	continue;
		sortlist(head,c);
	}
	outlist(head);
	return 0;
}
void outlist(PNODE head){
	PNODE p;
	p=head->next;
	while(p->next!=NULL){
		printf("%c ",p->data);
		p=p->next;
	}
	printf("%c\n",p->data);
}
void sortlist(PNODE h,char c){
	PNODE p;
	p=(PNODE)malloc(sizeof(NODE));
	p->data=c;
	while(h->next!=NULL&&h->next->data<=c)
		h=h->next;
	if(h->data==c)	return;
	p->next=h->next;
	h->next=p;
}
