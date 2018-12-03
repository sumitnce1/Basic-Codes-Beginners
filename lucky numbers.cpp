#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int n=s.length(),flag=0;
	    map<long long,int> m;
	    for(int i=0;i<n;i++){
	        long long num=s[i]-'0';
	        m[num]+=1;
	        if(m[num]>1){
	            flag=1;
	            break;
	        }
	        for(int j=i+1;j<n;j++){
	            num*=(s[j]-'0');
	            m[num]+=1;
	            if(m[num]>1){
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==1) cout << "0\n";
	    else cout << "1\n";
	}
	return 0;
}

https://practice.geeksforgeeks.org/problems/lucky-number/0
