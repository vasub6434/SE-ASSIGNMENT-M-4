#include<iostream>
using namespace std;
class employee{
	private:
		string name;
		int id;
		float salary;
	public:
		employee(string n,int i,float s){
			name=n;
			id=i;
			salary=s;
		}
		void set(char per){
			
		switch(per){
			case 'A':
				salary+=salary*0.10;
				break;
			case 'B':
				salary+=salary*0.5;
				break;
			case 'C':
				salary+=salary*0.2;
				break;
			default:
				cout<<"Invalid performance";
				break;
		}
		cout<<"salary"<<salary;
		}
};
main(){
	employee e1("vasu",1,25000);
	
	e1.set('B');
}
