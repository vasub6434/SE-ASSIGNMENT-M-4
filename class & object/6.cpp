#include<iostream>
using namespace std;
class person{
	private:
		string name;
		int age;
		string country;
	public:
		void set(){
			cout<<"Enter a name :";
			cin>>name;
			
			cout<<"Enter a age :";
			cin>>age;
			
			cout<<"Enter a country :";
			cin>>country;
		}
		void get(){
			cout<<endl<<"The name is :"<<name<<endl;
			
			cout<<"The age is :"<<age<<endl;
			
			cout<<"The country is :"<<country;
		}	
};
main(){
	person p1;
	p1.set();
	p1.get();
}
