#include<stdio.h>
void read(int[],int);
void display(int[],int);
void swap(int*,int*);
void quicksort(int[],int,int);
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
void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
	
}
void quicksort(int a[],int low,int high)
{
	int left,right,p;
	if(low<high)
	{
		left=low+1;
		p=a[low];
		right=high;
		while(left<right)
		{
		while(a[left]<p&&left<right)
		left++;
		while(a[right]>p)
		right--;
		if(left<right)
		swap(&a[left],&a[right]);
	}
	swap(&a[low],&a[right]);
	quicksort(a,low,right-1);
	quicksort(a,right+1,high);
	}
}
int main()
{
	int a[10],n;
	printf("Enter no.of elements");
	scanf("%d",&n);
	printf("Enter array elements");
	read(a,n);
	printf("before sorting");
	display(a,n);
	quicksort(a,0,n-1);
	printf("\n");
	printf("After sorting");
	display(a,n);
	}	

