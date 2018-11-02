#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"without arguments"<<endl;
    }
        void show(int a)
    {
        cout<<"single argument"<<endl;
    }
        void show(int a,int b)
    {
        cout<<"two arguments"<<endl;
    }
};
int main()
{
    A a1;
    a1.show();
    a1.show(23);
    a1.show(2,5);
    return 1;

}
