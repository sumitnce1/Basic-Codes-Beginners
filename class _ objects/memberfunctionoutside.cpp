#include<iostream>
using namespace std;
class date
{
    private:
        int day;
        int month;
        int year;
    public:
        void set(int day_in,int month_in,int year_in);
        void show();
};
void date::set(int day_in,int month_in,int year_in)
{
    day=day_in;
    month=month_in;
    year=year_in;
}
void date::show()
{
    cout<<day<<"--"<<month<<"--"<<year<<endl;
}

int main()
{
    date d1,d2,d3;
    //set date of birth
    d1.set(26,3,1958);
    d2.set(14,4,1971);
    d3.set(1,9,1973);
    cout<<"Birth date of the First Author";
    d1.show();
    cout<<"Birth date of second number";
    d2.show();
    cout<<"Birth date of the third number";
    d3.show();
    return 1;
}
