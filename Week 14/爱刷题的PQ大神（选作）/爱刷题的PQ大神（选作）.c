#include<stdio.h>
struct problem{
	int id,dif;
};
int cmp(struct problem a,struct problem b){
	if(a.dif!=b.dif)	return a.dif>b.dif;
	return a.id<b.id;
}
int divide(struct problem p[],int l,int r){
	struct problem key=p[l];
	while(l<r){
		while(l<r&&cmp(p[r],key))	r--;
		if(l<r)	p[l++]=p[r];
		while(l<r&&cmp(key,p[l]))	l++;
		if(l<r)	p[r--]=p[l];
	}
	p[l]=key;
	return l;
}
void qsort(struct problem p[],int srt,int end){
	if(srt<end){
		int pos=divide(p,srt,end);
		qsort(p,srt,pos-1);
		qsort(p,pos+1,end);
	}
}
int main()
{
	char filename[20];
	gets(filename);
	FILE *fp;
	if((fp=fopen(filename,"r"))==NULL){
		puts("File Name Error.");
		return 0;
	}
	int t;
	fscanf(fp,"%d",&t);
	while(t--){
		int n,easy=1;
		struct problem p[1005]={0};
		fscanf(fp,"%d",&n);
		for(int i=1;i<=n;i++){
			fscanf(fp,"%d%d",&p[i].id,&p[i].dif);
			if(p[i].dif>=100)	easy=0;
		}
		if(easy){
			puts("This OJ is too easy for PQ Dashen!");
			if(t)	putchar('\n');
			continue;
		}
		qsort(p,1,n);
		for(int i=n;i;i--){
			if(p[i].dif<100)	break;
			printf("%d\n",p[i].id);
		}
		if(t)	putchar('\n');
	} 
}
