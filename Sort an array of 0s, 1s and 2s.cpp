#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int one=0,zero=0,two=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==1)
	        one++;
	        else if(arr[i]==2)
	        two++;
	        else
	        zero++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i<zero)
	        cout<<0<<" ";
	        else if(i<(zero+one))
	        cout<<1<<" ";
	        else
	        cout<<2<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
