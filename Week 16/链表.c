/*注释部分为前置代码*/
/*
#include<stdio.h>
#include<stdlib.h>
typedef struct numLink{
	int no;
	struct numLink *next;
}NODE;
NODE *MoveNode(NODE *);
void SetLink(NODE *h){
	NODE *p=NULL,*q=NULL;
	int m;
	while(1){
		scanf("%d",&m);
		if(m==-1)
			return ;
		p=(NODE *)malloc(sizeof(NODE));
		p->no=m;
		p->next=NULL;
		if(h->next==NULL){
			h->next=p;
			q=p;
		}
		else{
			q->next=p;
			q=q->next;
		}
	}
	return;
}
int main()
{
	NODE *head=NULL,*q=NULL;
	head=(NODE *)malloc(sizeof(NODE));
	head->no=-1;
	head->next=NULL;
	SetLink(head);
	q=MoveNode(head);
	do{
		printf("%d ",q->next->no);
		q=q->next;
	}while(q->next!=NULL); 
	printf("\n");
	return 0;
}
*/
NODE *MoveNode(NODE *head){
	NODE *end=head,*p=head,*tend;
	while(end->next!=NULL)	end=end->next;
	tend=end;
	while(p->next!=NULL){
		if(!(p->next->no%2)){
			int flag=p->next==end;
			tend->next=p->next;
			p->next=p->next->next;
			tend=tend->next;
			tend->next=NULL;
			if(flag)	break;
		}
		else p=p->next;
		if(p==end)	break;
	}
	return head;
}
