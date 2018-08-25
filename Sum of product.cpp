/* WRITE A c++ PROGRAM Sum of Products.
 SUMIT KUMAR */
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int n,sum=0;
	   cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   for(int i=0;i<n-1;i++)
	   {
	       for(int j=i+1;j<n;j++)
	       {
	           sum=sum+(a[i] & a[j]);
	       }
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
