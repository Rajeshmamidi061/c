//#include<stdio.h>
//int main()
//{
//	int i,j,a[10],n,d,tar;
//	printf("Enter a number");
//	scanf("%d",&n);
//	printf("Enter a target");
//	scanf("%d",&tar);
//	printf("Enter array elements");
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	  
//	for(i=0;i<n;i++)
//   {
//	for(j=n;j>=0;j--)
//	{
//		d=a[i]+a[j];
//		if(d==tar)
//		{
//		
//		printf("[%d,%d]",i,j);
//	    return 0; 
//	}
//	}
//
//   }
//}




#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
        	
		
            if(a[i]<a[j])
            {   
               int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
}
}
        
        
    
    for(k=0;k<n;k++)
            {
                printf("%d ",a[k]);
            }printf("\n");
    return 0;
}
