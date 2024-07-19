#include<iostream>
using namespace std;
class matrix
{
    int i;
	public:
 	   matrix() {

  	  }
  	  matrix(int s) {
        i = s;
    	}
  	  void show() {
   	     cout << "value: "<<i;
   	 }

   	 matrix operator+(matrix& obj) {
      	  matrix j;
      	  j.i = i + (obj.i);
      	  return j;
   	 }
};

main() {
    matrix m1(25);
    matrix m2(22);
    matrix answer;
    answer = m1 + m2;
    answer.show();
}
