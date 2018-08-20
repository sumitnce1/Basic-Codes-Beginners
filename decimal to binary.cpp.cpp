//WRITE THE PROGRAM Decimal to Binary.
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i;
	cout<<"ENTER THE DECIMAL NUMBER: ";
	cin>>n;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	cout<<" BINARY OF THE GIVEN NUMBER: ";
	for(i=i-1;i>=0;i--)
	{
		cout<<a[i];
	}
		return 0;	
}
