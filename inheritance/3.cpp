#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
	public:
		void p_data(){
			cout<<"Enter a name :";
			cin>>name;
			
			cout<<"Enter a age :";
			cin>>age;
			
		}
		void pe_data(){
			cout<<"Name is :"<<name<<endl;
			cout<<"age is :"<<age<<endl;
		}
		
};
class student
{
	private:
		float per;
	public:
		void s_data(){
			cout<<"Enter a persentage :";
			cin>>per;
		}
		void se_data(){
			cout<<"persentage is :"<<per<<endl;
		}
		
};
class teacher : public student,public person
{
	private:
		int salary;
	public:
		void t_data(){
			cout<<"Enter a salary :";
			cin>>salary;
		}
		void te_data(){
			cout<<"salary is :"<<salary<<endl;
		}
};
main(){
	teacher t;
	t.p_data();
	t.s_data();
	t.t_data();
	t.pe_data();
	t.se_data();
	t.te_data();
}

