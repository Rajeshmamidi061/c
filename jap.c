#include<stdio.h>
int main()
{
  int a,n,i=1,d,o,rem,rev=0,sum=0;
  scanf("%d%d",&n,&a);
//  for(i=1;i<=n;i++)
//  {
   while(i!=0&&i<=n)
   {
     rem=i%10;
     rev=rev*10+rem;
     i=i/10;
     if(rev==i)
     {
       sum=sum+rev;
     }
     i++;
     
   }
//  }
  printf("%d",sum);
  
}
