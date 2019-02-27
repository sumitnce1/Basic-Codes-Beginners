#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
	string s,word;
	getline(cin,s);
	stringstream ss(s);
	int i=1;
	while(ss>> word)
	{
	 if(i%2==0){
	 reverse(word.begin(),word.end());
	 cout << word << " ";
	 }
	 else
	 cout << word << " ";
	 i++;
	}
	cout << endl;
	}
	return 0;
}
