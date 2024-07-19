#include<iostream>
using namespace std;
class tops{
	int a,b;
	public:
		void maths(int s,int t){
			a=s;
			b=t;
			cout<<"Addition :"<<a+b<<endl;	
		}
		void maths(int u,int v,int w){
			a=u;
			b=v;
			cout<<"Subtraction :"<<a-b<<endl;
		}
		void maths(int c,int d,int e,int f){
			a=c;
			b=d;
			cout<<"Multiplication :"<<a*b<<endl;
		}
		void maths(int g,int h,int j,int k,int l){
			a=g;
			b=h;
			cout<<"Division :"<<a/b<<endl;
		}
};
main()
{
	tops t1;
	t1.maths(10,20);
	t1.maths(30,15,5);
	t1.maths(5,10,15,20);
	t1.maths(10,5,25,85,75);
}
