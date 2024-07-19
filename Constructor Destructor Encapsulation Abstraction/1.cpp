#include<iostream>
using namespace std;
class cube{
	private:
		int num=5;
	public:
		inline void get_data(){
			cout<<"multiplication is :"<<num*num*num;
			
		}
};
main(){
	cube c;
	c.get_data();
}
