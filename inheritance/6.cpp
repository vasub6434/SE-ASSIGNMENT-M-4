#include<iostream>
using namespace std;

class tops
	{
	private:
	    void print_p1() {
	        cout << "\n tops ";
	    }
	public:
	    void print_p2() {
	        print_p1();
	
	    }
};

class red
	{
	protected:
	    void print_p3() {
	        cout << "\n red ";
		    }
	};
	
class yellow : public red, public tops
	{
	public:
	    void print_p4() {
	
	        cout << "\n yellow ";
	    }
	    void show(){
	        print_p2();
	        print_p3();
	        print_p4();
	
	    }
};

main() {
    yellow y;
    y.show();
}
