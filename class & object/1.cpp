#include<iostream>
using namespace std;
class calc{
	private:
		int a,b;
	public:
		void get_number()
		{
			cout<<"Enter a number 1 :"<<endl;
			cin>>a;
			
			cout<<"Enter a number 1 :"<<endl;
			cin>>b;	
		}
		void add()
		{
			cout<<"Addition :"<<a+b<<endl;
		}
		void sub()
		{
			cout<<"subtraction :"<<a-b<<endl;
		}
		void mul()
		{
			cout<<"multiplication:"<<a*b<<endl;
		}
		void div()
		{
			cout<<"division :"<<a/b<<endl;
		}
};
main()
{
	calc c1;
	c1.get_number();
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
}
