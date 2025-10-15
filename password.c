#include<stdio.h>
int main()
{
	int w,a;
	float h,bmi;
	printf("Enter your age");
	
	scanf("%d",&a);
	
	printf("Enter your weight in kg");
	scanf("%d",&w);
	printf("Enter your height in meters");
	scanf("%f",&h);
	bmi=w/(float)(h*h);
	printf("%.2f\n",bmi);
	if(a>=20)
	{
		if(bmi>=18.5&&bmi<=24.9)
		{
			printf("Healthy");
		}
		else if(bmi>=25&&bmi<=29.9)
		{
			printf("Overweight\n");
		}
		else if(bmi<18.5)
		{
			printf("Underweight\n");
		}
		else if(bmi>30)
		{
			printf("obesity\n");
		}
		else
		{
			printf("Unknown\n");
		}
	}
}

