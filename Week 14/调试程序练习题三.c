#include<stdio.h>
//*---*:Ϊ�޸�ԭ�� 
int a[100];
int game(int n,int m,int k){			//�ݹ�������Ϸ
										//n:С��������m�����±�Ϊ m ��С����ʼ������k:����ֵ
    int i,j=0,count=0,g;				//j:��ǰ����ֵ
    do{
        if(a[m]!=0){					//����С������Ϊ��
            j++;
            if(j==k)					//�������˳�ֵ
                a[m]=0;					//��С���˳���
            m++;						//����
            if(m>=n)					//��ǰ�����߳�����Χ
                m=0;					//ѭ��������
        }
        else
            while(a[m]==0){				//�����ѳ�����
                m++;
                if(m>=n)
                    m=0;
            }
    }while(j<k);						//����һ�Σ��˳�һ��С��
    for(i=0;i<n;i++)					//ͳ�ƻ��ڶ��ڵ�С������
        if(a[i]!=0){
            g=i;
            count++;
        }
    if(count==1)						//ʣһ��С�������ݹ�
        //return(g);					//���ض������һ�˱��
        return(g+1);					//*�������=�±���+1*
    while(a[m]==0){						//�����´ο�ʼ����С��
        m++;
        if(m>=n)
            m=0;
    }
    return(game(n,m,k));                 //�ݹ���ñ�������
}
int main()
{
    int i,n,r;
    scanf("%d%d",&n,&r);				//����С������������ֵ    
    for(i=0;i<n;i++)
        a[i]=i+1;						//��С�����
    //printf("The left child is NO %d.\n",game(n,1,r));	//�ӵ�һ��С����ʼ����
    printf("The left child is NO %d.\n",game(n,0,r));	//*��һ��С�����±�Ϊ0*
    return 0;
}
