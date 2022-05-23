#include<stdio.h>
#include<string.h>
#define V  puts("Valid")
#define IV puts("Invalid")
const int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const int v[11]={1,0,10,9,8,7,6,5,4,3,2};
void update(char id[]){
	char tmp[25];
	for(int i=0;i<6;i++)
		tmp[i]=id[i];
	if(id[12]=='9'&&id[13]=='9'&&id[14]>'5')
		tmp[6]='1',tmp[7]='8';
	else
		tmp[6]='1',tmp[7]='9';
	for(int i=6;i<15;i++)
		tmp[i+2]=id[i];
	for(int i=0;i<17;i++)
		id[i]=tmp[i];
}
int calc(char id[]){
	int s=0;
	for(int i=0;i<17;i++)
		s+=(id[i]-'0')*w[i];
	s%=11;
	return v[s];
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		char id[25];
		memset(id,0,sizeof(id));
		scanf("%s",id);
		if(strlen(id)==15){
			update(id);
			id[17]=(calc(id)==10?'X':calc(id)+'0');
			puts(id);
		}
		else if(strlen(id)==18){
			int t=calc(id);
			if(t==10)
				if(id[17]=='X') V;
				else IV;
			else if(id[17]==t+'0') V;
			else IV;
		}
		else IV;
	}
}
