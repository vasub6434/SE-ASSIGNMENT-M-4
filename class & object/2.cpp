#include<iostream>
using namespace std;
class bank{
	private:
		string name;
		int account;
		string accountt;
		int balance;
	
	public:
		void get_data(){
			
			cout<<"Name of the depositor :";
			cin>>name;
			
			cout<<"Account number :";
			cin>>account;
			
			cout<<"Type of Account :";
			cin>>accountt;
			
			cout<<"Balance amount in the account :";
			cin>>balance;
			
		}
		void print_data(){
			cout<<"To assign values :"<<10000<<endl;
			
			cout<<endl<<"To deposited an amount :"<<balance+10000<<endl;
			
			cout<<"To withdraw an amount after checking balance :"<<balance-10000<<endl;
			
			cout<<"To display name and balance :"<<name   <<balance;
		}
};
main(){
	bank b1;
	b1.get_data();
	b1.print_data();
	
}
