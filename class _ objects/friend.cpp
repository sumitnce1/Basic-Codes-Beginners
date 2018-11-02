/*C++ program to demonstrate example of friend function with class.*/
#include <iostream>

using namespace std;

class Number
{
private:
    int a;
public:
    void getNum(int x);
    //declaration of friend function
    friend void printNum(Number NUM);


};

//class member function definitions
void Number::getNum(int x)
{
    a=x;
}

//friend function definition, no need of class name with SRO (::)
void printNum(Number NUM)
{
    cout << "Value of a (private data member of class Number): " << NUM.a;

}

int main()
{
    Number nObj; //Object declaration
    nObj.getNum(1000);
    printNum(nObj);
    return 0;
}
