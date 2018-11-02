#include<iostream>
using namespace std;
class Myclass
{
    static int count;
    int number;
    public:
        void set(int num)
        {
            number=num;
            ++count;
        }
        void show()
        {
            cout<<"\n Number of calls made to 'set()' through any object"<<count;
        }
};
int Myclass::count=0;
int main()
{
    Myclass obj1;
    obj1.show();
    obj1.set(100);
    obj1.show();
    Myclass obj2,obj3;
    obj2.set(200);
    obj2.show();
    obj2.set(250);
    obj3.set(300);
    obj1.show();
    return 1;
}
