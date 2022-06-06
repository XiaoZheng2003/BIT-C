/*注释部分为前置代码*/
/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
    char *name;
    int score;
    struct Node *next;
};
struct Node* connect(struct Node *x,struct Node *y,struct Node *z);
int main()
{    
	struct Node a,b,c,*p;
	a.name="LiPing";
	b.name="LiuHai";
	c.name="FengYun"; 
	scanf("%d,%d,%d",&a.score,&b.score,&c.score);
	p=connect(&a,&b,&c);
	printf("%s-%d\n",p->name,p->score);
	p=p->next;
	printf("%s-%d\n",p->name,p->score);
	p=p->next;
	printf("%s-%d\n",p->name,p->score);
	return 0;
}
*/
struct Node* connect(struct Node *x,struct Node *y,struct Node *z){
	struct Node* h;
	if(x->score>y->score)	x->next=y,h=x;
	else	y->next=x,h=y;
	if(z->score>h->score)	z->next=h,h=z;
	else if(z->score<h->next->score)	h->next->next=z;
	else z->next=h->next,h->next=z;
	return h;
}
