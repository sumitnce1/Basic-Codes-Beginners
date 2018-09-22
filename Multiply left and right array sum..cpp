#include<iostream>
using namespace std;
int main()
{
   int s;
   cin>>s;
   while(s--)
   {
       int i,j,k,n,sum=0,add=0;
        cin>>n;
        int ar[n];
         for(j=0;j<n;j++)
       {
           cin>>ar[j];
        }
        for(i=0;i<n/2;i++)
        {
            sum+=ar[i];
        }
        for(k=n/2;k<n;k++)
        {
            add+=ar[k];
        }
        cout<<sum*add<<endl;
   }
	return 0;
}
