#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j;
    scanf("%d",&n);
  
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    int mid=n/2;
    while(mid!=1)
   {
   
    i=0,j=mid;
    int temp;
    
    while(i<=mid && j<n)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        i++;
        j++;
        
    }
    int k;
     for(k=0;k<n;k++)
     {
         printf("%d ",a[k]);
     }
     printf("\n");
     mid--;
}
    return 0;
}
