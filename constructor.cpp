#include<iostream>
using namespace std;

class student{
	public:
		student(){
		cout<<"constructor is called"<<endl;
		}
		~student()
		{
			cout<<"Destuctor is called"<<endl;
		}
};
int main()
{
	student s1;
	return 0;
}
