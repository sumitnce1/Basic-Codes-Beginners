/* Write a c++ program Even or Odd (using if else).
 SUMIT KUMAR
 */
 
#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cout<<"ENTER A NUMBER:- ";
		cin>>n;
		if(n%2==0)
		cout<<n<<" :-IS EVEN NUMBER"<<endl;
		else
		cout<<n<<" :-IS ODD NUMBER"<<endl;
		}
	return 0;
}

