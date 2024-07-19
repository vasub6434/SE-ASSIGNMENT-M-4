#include <iostream>
using namespace std;

class Triangle {
private:
    int l1;
    int l2; 
    int l3; 

public:
   
    Triangle(int a, int b, int c) {
        l1 = a;
        l2 = b;
        l3 = c;
    }

    
    void check() {
        if (l1 == l2 && l2 == l3) {
            cout << "triangle is Equilateral";
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            cout <<"triangle is Isosceles";
        } else {
            cout <<"triangle is Scalene";
        }
    }
};

int main() {
    int a1, a2, a3;

   
    cout << "\n Enter length 1: ";
    cin >> a1;
    cout << "\n Enter length 2: ";
    cin >> a2;
    cout << "\n Enter length 3: ";
    cin >> a3;

  
    Triangle t(a1, a2, a3);
    t.check();
}
