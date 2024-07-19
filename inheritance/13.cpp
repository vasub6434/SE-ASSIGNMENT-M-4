#include<iostream>
using namespace std;
class tops{
	int a,b;
	public:
		tops(int s,int t)
		{
			a=s;
			b=t;
		}
		friend void max(tops);
};
void max(tops m)
{
	if(m.a<m.b){
		cout<<"max number "<<m.a;
	}
	else{
		cout<<"max number "<<m.b;
	}
}
main()
{
	tops t(200,300);
	max(t);

}
