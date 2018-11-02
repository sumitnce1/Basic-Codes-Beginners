#include<iostream>
#include<string.h>
using namespace std;
class base_class {
public:
    void show()
    {
        cout<<"equal for all calls"<<endl;
    }

};

class first_derived_class: public base_class {

};

class second_derived_class: public base_class {
    };

class third_derived_class: public base_class {

};
int main()
{
    first_derived_class f1;
    f1.show();
    second_derived_class s2;
    s2.show();
    third_derived_class t1;
    t1.show();
}
