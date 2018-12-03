#include <iostream>
using namespace std;
int main() 
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n, i, p=0, q=0;
	    cin>>n;
	    long long int a[n], dup[n];
	    for(i=0; i<n; i++)
	    {
	        cin>>a[i];
	        dup[i]=a[i];
	    }
	    sort(dup, dup+n);
	    for(i=0; i<n; i++)
	    {
	        if(dup[0]==a[i])
	            p=i;
	        else if(dup[n-1]==a[i])
	            q=i;
	    }
	    if(p==0 && q==(n-1))
	        cout<<dup[n-1]<<" "<<1<<endl;
	    else if(p==n-1 && q==0)
	        cout<<dup[n-1]<<" "<<2<<endl;
	    else if(p<q)
	        cout<<dup[n-1]<<" "<<3<<endl;
	    else if(p>q)
	        cout<<dup[n-1]<<" "<<4<<endl;
	}
	return 0;
}
