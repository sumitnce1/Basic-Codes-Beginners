//WRITE THE PROGRAM Decimal to Binary.
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main() 
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int a[100],n,k=0,c=0,s;
	    cin>>n;
	    while(n>0)
	    {
	        a[k++]=n%2;
	        n=n/2;
	    }
	    for(s=k-1;s>=0;s--)
	    {
	        c=c*10+a[s];
	    }
	    cout<<c<<endl;
	}
	return 0;
}
