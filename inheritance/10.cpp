#include <iostream>
using namespace std;

class tops
{
	private:
  	  string str;
	public:
   	 	tops() {
	
   		 }
   		tops(string i) {
     	  	str = i;
   	 	}
    	void display() {
        	cout<<"Your concat string : "<<str;
   		 }

   		 tops operator+(tops &obj)
   		 {
        	tops s;
        	s.str = str + obj.str;
        	return s;
   		 }
};

main()
{
    tops t("ms");
    tops t1("dhoni");
    tops t2;
    t2 = t + t1;
    t2.display();
}

