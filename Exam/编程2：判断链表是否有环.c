#include<stdio.h>
#include<malloc.h>
//����ṹ��
typedef struct list{
	char data;
	struct list *next;
}*List,LNode;
//��������
List init_list(List head);
int Detection(List head);
void main()
{
	List head;
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	head = init_list(head);
	if(Detection(head))
		printf("���������л�!\n");
	else
		printf("���������޻�!\n");
}
//�����ʼ������
List init_list(List head){
	int i=0;
	List p=head;
	char chain[10000];
	gets(chain);
	while(chain[i]!='\0'){
		if(chain[i]=='@'){
			int link=chain[++i]-'0';
			List q=head;
			while(link--)
				q=q->next;
			p->next=q->next;
			break;
		}
		List s;
		s=(LNode*)malloc(sizeof(LNode));
		s->data=chain[i];
		s->next=NULL;
		p->next=s;
		p=p->next;
		i++;
	}
	return head;
}
int Detection(List head){
	List p=head,q;int cnt=0;
	while(p->next!=NULL){
		p=p->next;q=head;
		for(int i=1;i<=cnt;i++){
			if(p==q)
				return 1;
			q=q->next;
		}
		cnt++;
		if(cnt>10000)	break;
	}
	return 0;
}
