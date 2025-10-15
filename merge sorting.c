#include<stdio.h>
void read(int[],int);
void display(int[],int);
void split(int[],int,int);
void merge(int[],int,int,int);
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void split(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		split(a,low,mid);
		split(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int high,int mid)
{
	int i,j,k,b[high-low+1];
	i=low;
	j=mid+1;
	k=0;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
		 b[k]=a[i];
		 i++;	
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
		while(j<=high)
		{
			b[k]=a[j];
			j++;
			k++;
		}
		for(i=0,k=0;i<=high;i++,k++)
		a[i]=b[k];
	
}
int main()
{
	int a[10],n;
	printf("Enter no.of elements");
	scanf("%d",&n);
	printf("Enter array elements");
	read(a,n);
	split(a,0,n-1);
	printf("after sorting\n");
	display(a,n);
}

