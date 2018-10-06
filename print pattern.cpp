#include<iostream>
using namespace std;
int print_pattern(int n)
{
	if(n<=0)
	{
		cout<<n<<" ";
		return 0;
	}
	cout<<n<<" ";
	print_pattern(n-5);
	cout<<n<<" ";
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
     {
     	int n;
     	cin>>n;
     	print_pattern(n);
     	cout<<endl;
      }
      return 0;
}
