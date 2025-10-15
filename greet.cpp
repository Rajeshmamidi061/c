#include<iostream>
using namespace std;

class print{
	   public: 
		void show(int x=5){
			cout<<"Integer "<<x<<"\n";
		}
		void show(double x)
		{
			cout<<"Double\t"<<x<<"\n";
		}
		void show(string x)
		{
			cout<<"String\t"<<x;
		}	
};
int main()
{
	print p;
	p.show(5);
	p.show(5.5);
	p.show("veer");
	
}



