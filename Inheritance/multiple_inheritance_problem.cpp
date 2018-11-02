#include<iostream>
#include<string.h>
using namespace std;
class base1
{
  public:
     void someFunction( )
     {
         cout<<"base 1 function"<<endl;
     }
};
class base2
{
    public:
    void someFunction( )
     {
         cout<<"base 2 function"<<endl;
     }
};
class derived : public base1, public base2
{

};

int main()
{
    derived obj;


    //obj.someFunction() // Error!
    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}
