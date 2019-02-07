#include"factorial.h"
int main()
{
	int a,b,x,y,p,q,s,result;
	cout<<"Enter initial values of a and b is: ";
	cin>>a>>b;
	cout<<"Enter destination values of x and y : ";
	cin>>x>>y;
	p=x-a;
	q=y-b;
	s=p+q;
	result=fact(s)/(fact(p)*fact(q));
	cout<<"The no. of ways from initial to destination point is "<<result;
	return 0;
}
