#include<iostream>
using namespace std;
int main()
{
	/*int x = 5;
	int y = 6;
	int *p;
	p =  &x;
	p = &y;*/
//check about reference
	int x = 5;
	int y = 6;
	int &r = x;	
	cout<<r;
	//&r=y;
	return 1;
}
