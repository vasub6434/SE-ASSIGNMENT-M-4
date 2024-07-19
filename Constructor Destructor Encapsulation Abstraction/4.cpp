#include <iostream>
using namespace std;

class Bank {
private:
    int Account; 
    int balance;        
    int dep;            
    int after;     
    int wit;         

public:
    
    Bank(int a, int b, int c, int d) {
        Account = a;
        balance = b;
        dep = c;
        wit = d;
    }

    void print() {
        cout << "\n Account number: " << Account;
        cout << "\n Balance: " << balance;
    }

    void deposit() {
        cout << "\n Deposit = " << dep;
        after = balance + dep;
        cout << "\n A--Balance : " << after;
    }

    void withdrawal() {
        cout << "\n Withdrawal = " << wit;
        cout << "\n A--Balance : " << after - wit;
    }
};

int main() {
  

   
    Bank f(785246522, 35000, 2000, 5000);
    f.print();
    f.deposit();
    f.withdrawal();

   
}
