#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{
	    cin>>str;
	    sort(str.begin(),str.end());
	    cout<<str<<" ";
	    while(next_permutation(str.begin(),str.end()))
		{
	        cout<<str<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
