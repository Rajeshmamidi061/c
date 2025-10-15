#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,n,t;
    printf("Enter no.of elements");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter 2nd array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[100],temp;
	printf("Enter no.of elements");
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
	
			if(a[i]<b[i])
			{
				c[i]=a[i];
			}
			else if(a[i]==b[j])
			{
				c[i]=a[i];
				c[i]=b[i];
			}
			else
			{
				c[i]=b[j];
			}
			
		}
		
	
	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
}
