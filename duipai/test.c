#include<stdio.h>
int main()
{
 int n,k,i,j,h,diji,s,sj,kong;
 scanf("%d %d",&n,&k);
 diji=1+4*(k-1)*n;
 for(i=1;i<=n;i++)
 {
  s=1+4*(k-1)*(i-1);
  for(j=1;j<=k;j++)
  {
   sj=s+4*(j-1);
   if(j==1||j==k)
   {
    kong=(diji-sj)/2;
    for(h=1;h<=kong;h++)
    {
     printf(" ");
    }
    for(h=1;h<=sj;h++)
    {
     printf("*");
    }
    for(h=1;h<=kong;h++)
    {
     printf(" ");
    }
    printf("\n");
   }
   if(j!=1&&j!=k)
   {
    kong=(diji-sj)/2;
     for(h=1;h<=kong;h++)
     {
     printf(" ");
     }
     printf("*");
     for(h=1;h<=(sj-2);h++)
     {
     printf(" ");}
     printf("*");
     for(h=1;h<=kong;h++)
     {
      printf(" ");
     } 
     printf("\n");
   }
  }
  for(j=1;j<=k;j++)
  {
   s=1+4*(k-1)*(i-1);
   sj=s+4*(k-2);
   kong=(diji-sj)/2;
     for(h=1;h<=kong;h++)
     {
     printf(" ");
     }
     printf("*");
     for(h=1;h<=(sj-2);h++)
     {
     printf(" ");
     }
     printf("*");
     for(h=1;h<=kong;h++)
     {
      printf(" ");
     }
     printf("\n");
  }
 }
 for(i=1;i<=diji;i++)
 {
  printf("*");
 }
 printf("\n");
}
