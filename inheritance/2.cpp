#include<iostream>
using namespace std;
class tops
{	
	protected:
		int l;
	public:
		void data(){
			cout<<"Enter a value l :";
			cin>>l;
		}
		void get_data(){
			cout<<"l value is :"<<l<<endl;
		}
		
};
class red : public tops
{
	private:
		int w;
	public:
		void put_data(){
			cout<<"Enter a value w :";
			cin>>w;
			
			cout<<"w value is :"<<w<<endl;
		}
		void print_data(){
			cout<<"area of rectangle is :"<<l*w;
		}
	
};
main(){
	red r;
	r.data();
	r.put_data();
	r.get_data();
	r.print_data();
}

