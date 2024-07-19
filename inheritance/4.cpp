#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int rollno;
	public:
		void s_data(){
			cout<<"Enter a name :";
			cin>>name;
			
			cout<<"Enter a rollno :";
			cin>>rollno;
		}
		void p_data(){
			cout<<"Name is :"<<name<<endl;
			cout<<"rollno is :"<<rollno<<endl;
		}
};
class marks{
	protected:
		int s1,s2,s3;
		int total,per;
	public:
		void m_data(){
			cout<<"Enter a subject 1 :";
			cin>>s1;
			
			cout<<"Enter a subject 2 :";
			cin>>s2;
			
			cout<<"Enter a subject 3 :";
			cin>>s3;
			
			total=s1+s2+s3;
			per=total/3;
			
			
		}
		void pa_data(){
			cout<<"subject 1 is :"<<s1<<endl;
			cout<<"subject 2 is :"<<s2<<endl;
			cout<<"subject 3 is :"<<s3<<endl;
			cout<<"All total :"<<total<<endl;
			cout<<"Persentage is :"<<per<<endl;
			
		}
		
};
class tops : public marks, public student
{
	private:
		char grade;
	public:
		void t_data(){
			if(per>=70)
				cout<<"grade : A"<<endl;
			else if(per>=60)
				cout<<"grade : B"<<endl;
			else if(per>=50)
				cout<<"grade : C"<<endl;
			else
				cout<<"fail"<<endl;
		}
};
main(){
	tops t;
	t.s_data();
	t.m_data();
	t.p_data();
	t.pa_data();
	t.t_data();
}
