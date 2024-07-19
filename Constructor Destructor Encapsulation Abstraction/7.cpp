#include<iostream>
using namespace std;

class Data
{
private:
    int day;
    int month;
    int year;
public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    int valid_date() {
        int a1 = 0;
        int a2 = 0;
        int a3 = 0;
        int ans ;

        if (day > 0 && day <= 31) {
            a1 = 1;
        }
        else {
            a1 = 0;
        };
        if (month > 0 && month <= 12)
        {
            a2 = 1;
        }
        else {
            a2 = 0;
        };
        if (!(year == 0))
        {
            a3 = 1;
        }
        else {
            a3 = 0;
        };

        if (a1== 1 && a2 == 1 && a3 == 1)
        {
            ans = 1;
        }else{
            cout<<"Your date "<<day<<"/"<<month<<"/"<<year<<" is not valid..";
        }
return ans;
    }

};

main()
{
    int date,month,year;
    cout<<"\n Enter date : ";
    cin>>date;
    cout<<"\n Enter month : ";
    cin>>month;
    cout<<"\n Enter year : ";
    cin>>year;
    Data d;
    d.setDate(date, month, year);
    int a = d.valid_date();
    if (a == 1)
    {
        cout<<"Your date "<<date<<"/"<<month<<"/"<<year<<" is valid! ";
    }
    
}
