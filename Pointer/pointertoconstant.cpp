#include<iostream>
using namespace std;
int main()
{
	const int *pi;
	int i[5]={1,2,3,4,5};
	pi=i;
	pi=pi+1;
	//*pi=20;
	
	//constant pointer
	
	int *const test=i;
	test++;
	return 1;
}
