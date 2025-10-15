

#include<iostream>
using namespace std;
int factorial(int n)
{
	if (n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int number;
	std::cout<<"Enter a positive number: ";
	std::cin>>number;
	if (number<0)
	{
		cout<<"number is invaild number."<<endl;
		
	}
	else
	{
		int r=factorial(number);
		cout<<"factorial of" <<number<<"\tis\t"<<r<<endl;
	}
}



