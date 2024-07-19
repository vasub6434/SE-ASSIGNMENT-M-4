#include<iostream>
using namespace std;
class student{
	private:
		int rollno;
	public:
		void get_data(){
			cout<<"Enter a Roll no :";
			cin>>rollno;
			
		}
		void print_data(){
			cout<<"Rollno is :"<<rollno<<endl;
		}
};
class test :public student
{
	protected:
		int s1,s2;
	public:
		void t_data(){
			cout<<"Enter a subject 1 :";
			cin>>s1;
			cout<<"Enter a subject 2 :";
			cin>>s2;
		}
		void p_data(){
			cout<<"subject 1 marks :"<<s1<<endl;
			
			cout<<"subject 2 marks :"<<s2<<endl;
		}
};
class result :public test
{
	private:
		int total;
	public:
		void r_data(){
			cout<<"Total marks is :"<<s1+s2<<endl;
		}
};
main(){
	result r;
	r.get_data();
	r.t_data();
	r.print_data();
	r.p_data();
	r.r_data();		
}
