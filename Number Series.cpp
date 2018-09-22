#include<iostream>
using namespace std;
int main() 
{
	int t; 
	cin>>t;
	while(t--)
	{
	 long long int n;
	 cin>>n;
	 int sum=0;
	 while(n%2==0)
     {
	     sum++;
	     n/=2;
	 }
	 cout<<sum<<endl;
  }
	return 0;
}
