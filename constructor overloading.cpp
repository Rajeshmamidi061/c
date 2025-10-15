#include<iostream>
using namespace std;

class student{
	private:
		int roll;
		string name;
	public:
		student(){
			roll=0;
			name="Unknown";
		
		}
	student(int r,string n){
		roll=r;
		name=n;
	}
	void display()
	{
		cout<<"Roll.No:"<<roll<<"Name:"<<name<<endl;
	}
};
int main()
{
	student s1;
	student s2(68,"Veerendra");
	s1.display();
	s2.display();
}

