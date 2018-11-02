#include<iostream>
using namespace std;
class NumberPairs
{
    int num1;
    int num2;
public:
    void read()
    {
        cout<<"Enter first number";
        cin>>num1;
        cout<<"Enter second number";
        cin>>num2;
    }
    int max()
    {

    if(num1>num2)
        return num1;
    else
        {
            return num2;
        }
    }
    void ShowMax()
    {
        cout<<"Maximum ="<<max();
    }
};
int main()
{

    NumberPairs n1;
    n1.read();
    n1.ShowMax();
}
