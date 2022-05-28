#include<math.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}NODE;
NODE *find(NODE *,int *);
void outputring(NODE *);
void change(int,int,NODE *);
void outputring(NODE *pring){
	NODE *p;
	p=pring;
	if(p==NULL)
		printf("NULL");
	else
		do{
			printf("%d",p->data);
			p=p->next;
		}while(p!=pring);
	printf("\n");
	return;
}
int main()
{
	int n,m;
	NODE *head,*pring;
	scanf("%d%d",&n,&m);
	head=(NODE *)malloc(sizeof(NODE));
	head->next=NULL;
	head->data=-1;
	change(n,m,head);
	pring=find(head,&n);
	printf("ring=%d\n",n);
	outputring(pring);
	return 0;
}
#define T 10000//求小数点后10000位 
int pt[T+5];
void fun(int n,int m,int t){
	for(int i=1;i<=t;i++){
		pt[i]=10*n/m;
		n=10*n-m*pt[i];
	}
	pt[0]=n;
}
void change(int n,int m,NODE *head){
	NODE *p,*q=head;
	fun(n,m,T);
	for(int i=1;i<=T;i++){
		if(!pt[0]&&!pt[i])	return;
		p=(NODE *)malloc(sizeof(NODE));
		p->next=NULL;
		p->data=pt[i];
		q->next=p;
		q=q->next;
	}
}
NODE *find(NODE *head,int *n){
	NODE *p=head,*q[T+5];
	int cnt=0;
	while(p->next!=NULL){
		p=p->next;
		q[++cnt]=p;
		for(int i=1;i<cnt;i++){
			if(p->data==q[i]->data){
				int flag=1;
				for(int t=1;t<=3&&flag;t++){
					for(int j=i;j<cnt&&p->next!=NULL;j++){
						if(p->data!=q[j]->data){
							flag=0;
							break;
						}
						p=p->next;
					}
					if(p->next==NULL){
						flag=0;
						break;
					}
				}
				if(flag){
					*n=cnt-i;
					q[cnt-1]->next=q[i];
					return q[i];
				}
				else
					p=q[cnt];
			}
		}
	}
	*n=0;
	return NULL;
}
