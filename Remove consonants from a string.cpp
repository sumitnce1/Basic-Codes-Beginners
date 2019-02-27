#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	getline (cin, s);
	while (s.length()==0 ) 
            getline(cin, s);
	int l=s.size();
	int f=0;
	for(int i=0;i<=l;i++)
	{
	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]==' ')
	    {
	    cout<<s[i];
	    f=1;
	    }
	}
	if(f==0)
	cout<<"No Vowel";
	cout<<endl;
	}
	return 0;
}
