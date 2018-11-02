#include<iostream>
using namespace std;
struct student
{
    int data;
    void display()
    {
        cout<<"i belong to student struct";
    }
};
int main()
{
    student s1;
    cin>>s1.data;
    cout<<s1.data;
    s1.display();
    return 1;
}
