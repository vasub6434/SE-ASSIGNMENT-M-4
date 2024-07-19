#include<iostream>
using namespace std;
class circle{
	private:
		int radius;
		float pi=3.14;
	public:
		void number(){
			cout<<"Enter a number :";
			cin>>radius;
		}
		void calc(){
			cout<<"circle area :"<<pi*radius*radius<<endl;
		}
		void cir(){
			cout<<"circumference :"<<2*pi*radius<<endl;
		}
};
main(){
	circle c1;
	c1.number();
	c1.calc();
	c1.cir();
}
