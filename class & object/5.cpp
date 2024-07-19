#include<iostream>
using namespace std;
class rectangle{
	private:
		float length,width;
	public:
		void get_size(){
			cout<<"Enter a length :";
			cin>>length;
			
			cout<<"Enter a width :";
			cin>>width;
		}
		void print_size()
		{
			cout<<"rectangle's area :"<<width*length<<endl;
			
			cout<<"perimeter :"<<2*(length + width)<<endl;
		}
		
};
main(){
	rectangle r1;
	r1.get_size();
	r1.print_size();
}
