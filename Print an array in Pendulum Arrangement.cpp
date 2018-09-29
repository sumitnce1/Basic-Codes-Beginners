#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t=0,n=0;
	cin >>t;
	while(t--)
	{
	    cin >>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++)
	    cin >>a[i];
	    int  mid=0;
	    sort(a,a+n);
	    if(n%2==0)
	        mid=(n-1)/2;
	    else
	        mid=n/2;
	        b[mid]=a[0];
	    int x=mid+1;
	    int y=mid-1;
	    for(int i=1;i<n;i++)
	    {
	        if(i%2!=0)
	        {
	            b[x]=a[i];
	            x++;
	        }
	        else
	        {
	            b[y]=a[i];
	            y--;
	        }
	    }
	    for(int i=0;i<n;i++)
	    cout << b[i] <<" ";
	    cout <<endl;
	}
	return 0;
}
