#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Constructor is  called.."<<endl;
	}
};
class B : public A
{
	public:
		B(){
			cout<<"Constructor is called.."<<endl;
		}
};
class C : public B
{
	public:
		C(){
			cout<<"Constructor is called.."<<endl;
		}	
};
int main(){
	C obj;
}
