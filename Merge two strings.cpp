#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	string s1,s2;
	while(t--)
	{
	    cin>>s1>>s2;
	    int i=0,j=0;
	    while(i<s1.size() && j<s2.size())
	    {
	        cout<<s1[i++]<<s2[j++];
	    }
	    while(i<s1.size())
	    cout<<s1[i++];
	    while(j<s2.size())
	    cout<<s2[j++];
	    cout<<endl;
	}
	return 0;
}
