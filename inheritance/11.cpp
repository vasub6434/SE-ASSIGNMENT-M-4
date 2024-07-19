
#include<iostream>
using namespace std;
class area{
	float area;
	float pi;
	int breadth;
	
	public:
		void cal(int a,int b){
			area=a;
			breadth=b;
			cout<<"Rectangle is :"<<area * breadth<<endl;
		}
		void cal(int c,int d,int f){
			area=c;
			breadth=d;
			
			cout<<"Triangle is :"<<0.5 *area* breadth<<endl;
		}
		void cal(float g,int h,int i,int j){
			pi=g;
			area=h;
			cout<<"Circle is :"<<pi * area * area;
		}
};
main(){
	area a;
	a.cal(10,20);
	a.cal(10,20,5);
	a.cal(3.14,10,12,10);
}
