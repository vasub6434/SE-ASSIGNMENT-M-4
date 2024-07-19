#include<iostream>
using namespace std;
class tops{
	private:
		int a,b;
	public:
		tops(){
			a=10;
			b=20;
		}
		void add(){
			cout<<"Addition is :"<<a+b<<endl;
		}
		void sub(){
			cout<<"Subtraction is :"<<a-b<<endl;
		}
		void mul(){
			cout<<"Multiplication is :"<<a*b<<endl;
		}
		void div(){
			cout<<"Division is :"<<a/b<<endl;
		}
};
main(){
	tops t1;
	t1.add();
	t1.sub();
	t1.mul();
	t1.div();
}
