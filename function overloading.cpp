#include<iostream>
using namespace std;

class number{
	public:
		void show(int x)
		{
			cout<<"Interger: "<<x<<endl;
			
		}
		void show(double x)
		{
			cout<<"Double: "<<x<<endl;
		}
		void show(string x)
		{
			cout<<"String: "<<x<<endl;
		}
};
int main()
{
	number n;
	n.show(5);
	n.show(5.5);
	n.show(68);
}
