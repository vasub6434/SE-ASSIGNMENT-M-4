#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int clas;
		int rollno;
		int marks;
		char grade;
	public:
		student(string n,int c,int r,int m)
		{
			name=n;
			clas=c;
			rollno=r;
			marks=m;
		}
		void get_data(){
			cout<<"Name is :"<<name<<endl;
			cout<<"Clas is :"<<clas<<endl;
			cout<<"Roll no is :"<<rollno<<endl;
			cout<<"Marks is :"<<marks<<endl;
		}
		void calculate()
		{
			if(marks>70)
			{
				cout<<"Grade : A"<<endl;
			}
			else if(marks>60)
			{
				cout<<"Grade : B"<<endl;
			}
			else if(marks>50)
			{
				cout<<"Grade : C"<<endl;
			}
			else
			{
				cout<<"Fail"<<endl;
			}
			
		}
};
main()
{
	student s1("vasu",12,3,75);
	s1.get_data();
	s1.calculate();
}
