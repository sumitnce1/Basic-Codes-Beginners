#include<bits/stdc++.h>
using namespace std;
int Answer(int n,int k){
    if(n==1){
        return 1;
    }
    if(n>k){
        return 0;
    }
    if(n==k){
        return 1;
    }
    int ans=0;
    for(int i=1;i<=(k-(n-1));i++){
        ans+=Answer(n-1,k-i);
    }
    return ans;
}

int main() 
{
	int T;
	string s;
	cin >>T;
	while(T--)
	{
	    cin>>s;
	    int found=s.find("=");
	    int n=(found+1)/2;
	    int k=stoi(s.substr(found+1));
	    cout<<Answer(n,k)<<endl;
	}
	return 0;
}
