/* Write a c++ program Difference series.
 SUMIT KUMAR
 */
#include<iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k=7,s;cin>>n;
	    s=3;
	    for(int i=1;i<n;i++)
		{
	        s+=k;
	        k+=4;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
