#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool prime[n+1];
	    memset(prime,true,sizeof(prime));
	    for(int i=2;i*i<=n;i++)
	    {
	        if(prime[i]==true)
	        {
	            for(int j=i*2;j<=n;j+=i)
	            {
	                prime[j]=false;
	            }
	        }
	    }
	    int i=2;
	    while((prime[i]==false || prime[n-i]==false) && i<n/2)
        {
            i++;
        }
        cout<<i<<" "<<n-i<<endl;
	}
	return 0;
}
