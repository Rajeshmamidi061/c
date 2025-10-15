#include<iostream>
using namespace std;

class student{
	private:
		int rollno;
	public:
		student(int r){
			rollno=r;
		}
		student(const student &s){
			rollno=s.rollno;
		}
		void display(){
			cout<<"Roll No: "<<rollno<<endl;
		}
};
int main()
{
	student s1(68);
	student s2=s1;
	
	s1.display();
	s2.display();
	student s3(92);
	s2=s3;
	s3.display();
	s2.display();
     return 0;
	
}
