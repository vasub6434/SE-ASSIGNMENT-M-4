#include<iostream>
using namespace std;
class car{
	private:
		string company;
		string model;
		int year;
	public:
		car(string c,string m,int y){
			company=c;
			model=m;
			year=y;
		}
		void set(){
			cout<<"company :"<<company<<endl;
			
			cout<<"model :"<<model<<endl;
				
			cout<<"year :"<<year<<endl;
		}
};
main(){
	car c1("honda","i20",2004);
	c1.set();
}
