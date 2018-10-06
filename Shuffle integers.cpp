#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n],i,count=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        int l=0,r=n/2;
        while(count<n)
        {
            if(l<n/2)
            {
                cout<<a[l++]<<" ";
                count++;
            }
            if(count<n)
                cout<<a[r++]<<" ";
                count++;
        }
        cout<<endl;
    }
	return 0;
}
