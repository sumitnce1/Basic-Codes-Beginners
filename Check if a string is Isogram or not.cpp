#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int a[26]={0},d=0;
	    for(int i=0;i<s.length();i++)
	    {
	        a[s[i]-97]++;
	    }
	    
	    for(int i=0;i<26;i++)
	    {
	        if(a[i]>1)
	        {
	            cout<<"0\n";
	            d=1;
	            break;
	        }
	    }
	    
	    if(d==0)
	    cout<<"1\n";
	}
	return 0;
}
