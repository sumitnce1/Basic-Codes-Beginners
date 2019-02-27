#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T > 0)
	{
	    float num;
	    int precision;
	    cin >> num >> precision;
	    cout.precision(precision);
	    cout << num << endl;
        T--;
	}
	return 0;
}
