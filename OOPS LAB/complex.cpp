#include<iostream>
using namespace std;
class complex
{
	public:
		int real;
		int imaginary;
		
};
int main()
{
	
complex c1,c2,c3;
cout<<"ENTER FIRST COMPLEX NUMBER: "<<endl;
cin>>c1.real>>c1.imaginary;
cout<<"FIRST COMPLEX NUMBER: "<<c1.real<<"+"<<c1.imaginary<<"i"<<endl;
cout<<"ENTER SECOND COMPLEX NUMBER: ";
cin>>c2.real>>c2.imaginary;
cout<<"SECOND COMPLEX NUMBER: "<<c2.real<<"+"<<c2.imaginary<<"i"<<endl;
c3.real=c1.real+c2.real;
c3.imaginary=c1.imaginary+c2.imaginary;
cout<<c3.real<<"+"<<c3.imaginary<<"i"<<endl;
return 0;
}
