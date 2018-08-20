//WRITE THE PROGRAM IN C++ SUM OF DIGIT.
//SUMIT KUMAR
#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    while(s--)
    {
    	int n,sum=0;
    	cin>>n;
        while (n>0)
    	{
    		sum=sum+n%10;
    		n=n/10;
        }
		cout<<sum<<endl;
	}
         return 0;
}
