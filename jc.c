#include<stdio.h>
int main()
{
  int n,l,r,listeners=0,i;
  scanf("%d %d %d",&n,&l,&r);
  for(i=0;i<n;i++)
  {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=l&&y>=r)
    {
      listeners++;
    }
  }
  printf("%d",listeners);
}
