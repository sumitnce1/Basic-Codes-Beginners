#include<iostream>
using namespace std;
//Initial Template for C++
#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;

	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void reverse_dig(int &a,int &b)
{
    int x=a;
    int y=b;
    int num=0;
    while(x)
    {
        int r=x%10;
        num=num*10+r;
        x/=10;
    }
    a=num;
    num=0;
    while(y)
    {
        int r=y%10;
        num=num*10+r;
        y/=10;
    }
    b=num;
}
void swap (int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
