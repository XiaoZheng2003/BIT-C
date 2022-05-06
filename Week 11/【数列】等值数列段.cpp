#include<stdio.h>
struct line{
	int num,l,s;
}t,ans; 
int main()
{
	int n,arr[15];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	t.num=arr[0];t.l=0;t.s=0;
	for(int i=1;i<=n;i++){
		if(t.num==arr[i])
			t.s++;
		else{
			t.num=arr[i];
			t.l=i;t.s=0;
		}
		if(t.s>ans.s)
			ans=t;
	}
	if(!ans.s)	puts("No equal number list.");
	else	printf("The longest equal number list is from %d to %d.\n",ans.l,ans.l+ans.s);
} 
